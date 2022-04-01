#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int n, short lim);
void wypisz(const short tab[], int n);
void collatz(short tab[], int n);
void zmien(short tab[], int n);
void signum(short tab[], int n);
void odwroc(short tab[], int n, int lewy, int prawy);
int ileNieparzystych(const short tab[],int n);
int ileParzystych(const short tab[],int n);
int ileMaksymalnych(const short tab[],int n);

int main() {
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);
    if(n <= 0 || n > N){
        printf("Liczba elementow musi byc z przedzialu [1, %d]!\n", N);
        return 1;
    }
    generuj(tab, n, 100);
    wypisz(tab, n);
    collatz(tab, n);
    printf("\n");
    wypisz(tab, n);
    zmien(tab, n);
    wypisz(tab, n);
    signum(tab, n);
    wypisz(tab, n);
    printf("Podaj a i b takie ze 0 < a < b < %d\n", n);
    int lewy, prawy;
    scanf("%d %d", &lewy, &prawy);
    odwroc(tab, n, lewy, prawy);
    ileNieparzystych(tab, n);
    ileParzystych(tab, n);
    ileMaksymalnych(tab, n);
    return 0;
}

void generuj(short tab[], int n, short lim){
    srand(time(NULL));
    for(short *p = tab; p < tab + n; p++){
        *p = rand() % lim + 1;
    }
}

void wypisz(const short tab[], int n){
    for(short *p = tab; p < tab + n; p++){
        printf("%5d", *p);
    }
    printf("\n");
}

void collatz(short tab[], int n){
    for(short *p = tab; p < tab + n; p++){
        if(*p <= 0){
            continue;
        }
        if(*p % 2 == 1){
            *p = 3 * *p + 1;
        }else{
            do{
                *p /= 2;
            }while (*p % 2 == 0);
        }
    }
}

void zmien(short tab[], int n){
    for(short *p = tab; p < tab + n; p++){
        if(*p % 2 == 1)
            *p *= 2;
        else
            *p *= -1;
    }
}

void signum(short tab[], int n){
    for(short *p = tab; p < tab + n; p++){
        if(*p > 0)
            *p = 1;
        else if (*p < 0)
            *p = -1;
    }
}

void odwroc(short tab[], int n, int lewy, int prawy){
    for(short *p = tab + lewy; p < tab + prawy; p++){
        for(short *b = tab + prawy; b > tab + lewy; b--){
            short pomoc = *p;
            *p = *b;
            *b = pomoc;
        }
    }
}

int ileNieparzystych(const short tab[],int n){
    int nieParzyste = 0;
    for(short *p = tab; p < tab + n; p++){
        if(*p % 2 == 1)
            nieParzyste++;
    }
    return nieParzyste;
}
int ileParzystych(const short tab[],int n){
    int parzyste = 0;
    for(short *p = tab; p < tab + n; p++){
        if(*p % 2 == 0)
            parzyste++;
    }
    return parzyste;
}
int ileMaksymalnych(const short tab[],int n){
    int naj = 0, ileNaj = 0;
    for(short *p = tab; p < tab + n; p++){
        if(*p > naj)
            naj = *p;
    }
    for(short *p = tab; p < tab + n; p++){
        if(*p == naj)
            ileNaj++;
    }
    return ileNaj;
}