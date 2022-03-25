#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void wypisz(int n, int tab[]){
    for(int i = 0; i < n; i++) {
        if (i + 1 == n)
            printf("%d\n", tab[i]);
        else
            printf("%d, ", tab[i]);
    }
}

void generuj(int tab[], int tabA[], int tabB[], int tabC[], int n){
    for(int i = 0; i < n; i++){
        tabC[i] = tabB[i] = tabA[i] = tab[i] = rand() % 101;
    }
}

void collatz(int tab[], int n){
    for(int i = 0; i < n; i++){
        if(tab[i] % 2 == 1){
            tab[i] = tab[i] * 3 + 1;
        }
    }
}

void zmien(int tab[], int n){
    for(int i = 0; i < n; i++) {
        if (tab[i] % 2 == 0) {
            tab[i] *= -1;
        } else {
            tab[i] *= 2;
        }
    }
}

void signum(int tab[], int n){
    for(int i = 0; i < n; i++) {
        if (tab[i] > 0) {
            tab[i] = 1;
        } else {
            tab[i] = -1;
        }
    }
}

void odwroc(int tab[], int lewy, int prawy){
    while(lewy < prawy){
        int pomoc;
        pomoc = tab[lewy];
        tab[lewy] = tab[prawy];
        tab[prawy] = pomoc;
        lewy++;
        prawy--;
    }
}

int ileNieparzystych(const int tab[], int n){
    int nieParzyste = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] % 2 == 1)
            nieParzyste++;
    }
    return nieParzyste;
}

int ileParzystych(const int tab[], int n){
    int Parzyste = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] % 2 == 0)
            Parzyste++;
    }
    return Parzyste;
}

int ileMaksymalnych(const int tab[], int n){
    int najWieksza = 0, ile = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] > najWieksza)
            najWieksza = tab[i];
    }
    for(int i = 0; i < n; i++){
        if(tab[i] == najWieksza)
            ile++;
    }
    return ile;
}

int main() {
    srand(time(NULL));
    const int N = 1000;
    int n;
    printf("Podaj 0 < n <= 1000\n");
    do{
        scanf("%d", &n);
    }while(!(0 < n && n <= N));
    int tab[n], tabA[n], tabB[n], tabC[n];
    generuj(tab, tabA, tabB, tabC, n);
    wypisz(n, tab);
    printf("a)\n");
    collatz(tabA, n);
    wypisz(n, tabA);
    printf("b)\n");
    zmien(tabB, n);
    wypisz(n, tabB);
    signum(tabB, n);
    wypisz(n, tabB);
    printf("c)\nPodaj dwie liczby wieksze od 0 i mniejsze od n\n");
    int lewy, prawy;
    scanf("%d %d", &lewy, &prawy);
    odwroc(tabC, lewy, prawy);
    wypisz(n, tabC);
    printf("d)\nW tablicy liczb parzystych jest %d, a liczb nie parzystych jest %d\n",
           ileParzystych(tab, n), ileNieparzystych(tab, n));
    printf("e)\nW tablicy najwieksza liczba wystepuje %d razy\n", ileMaksymalnych(tab, n));
    return 0;
}
