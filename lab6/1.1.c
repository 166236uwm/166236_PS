#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow\n");
    int n;
    scanf("%d", &n);
    if(n <= 0 || n > N){
        printf("Liczba elementow musi byc z przedzialu [1, %d]!\n", N);
        return 1;
    }
    short lim = 999;
    srand(time(NULL));
    for(short *p = tab; p < tab + n; p++){
        *p = rand() % lim + 1;
    }
    for(short *p = tab; p < tab + n; p++){
        printf("%5d ", *p);
    }
    printf("\na)\n");
    for(short *p = tab; p < tab + n; p++){
        if(*p % 2 == 1 && *p > 0){
            printf("%5d", *p * 3 + 1);
        }else if(*p > 0){
            int najDziel;
            for(int i = 1; i < *p / 2; i += 2){
                if(*p % i == 0)
                    najDziel = i;
            }
            printf("%5d", najDziel);
        }
    }
    printf("\nb)\n");
    for(short *p = tab; p < tab + n; p++){
        if(*p % 2 == 1)
            printf("%5d", *p *= 2);
        else
            printf("%5d", *p *= -1);
    }
    printf("\n");
    for(short *p = tab; p < tab + n; p++){
        if(*p > 0)
            printf("%5d", 1);
        else if(*p < 0)
            printf("%5d", -1);
    }
    printf("\nc)\nPodaj dwie liczby a i b takie ze 0 < a < b < %d\n", n);
    int lewy, prawy;
    scanf("%d %d", &lewy, &prawy);
    for(short *p = tab + lewy; p < tab + prawy; p++){
        for(short *b = tab + prawy; b > tab + lewy; b--){
            short pomoc = *p;
            *p = *b;
            *b = pomoc;
        }
    }
    for(short *p = tab; p < tab + n; p++){
        printf("%5d ", *p);
    }
    int parzyste = 0 , nieParzyste = 0;
    for(short *p = tab; p < tab + n; p++){
        if(*p % 2 == 0)
            parzyste++;
        else
            nieParzyste++;
    }
    short naj = 0;
    for(short *p = tab; p < tab + n; p++){
        if(*p > naj)
            naj = *p;
    }
    int ileNaj = 0;
    for(short *p = tab; p < tab + n; p++){
        if(*p == naj)
            ileNaj++;
    }
    printf("Parzystych: %d\n"
           "Nie parzystych: %d\n"
           "Najwieksza: %d\n"
           "Pojawia sie: %d\n", parzyste, nieParzyste, naj, ileNaj);
    return 0;
}
