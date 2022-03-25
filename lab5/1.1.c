#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void wypisz(int i, int n, int t){
    if(i + 1 == n)
        printf("%d\n",t);
    else
        printf("%d, ",t);
}
int main() {
    srand(time(NULL));
    const int N = 1000;
    int n;
    printf("Podaj liczbe z przedzialu od 0 do %d\n", N);
    do{
        scanf("%d", &n);
    }while(!(0 < n && n <= N));
    int tab[n], tabA[n], tabB[n],tabC[n];
    for(int i = 0; i < n; i++){
        tabC[i] = tabB[i] = tabA[i] = tab[i] = rand() % 101;
        wypisz(i, n, tab[i]);
    }
    printf("a)\n");
    for(int i = 0; i < n; i++){
        if(tab[i] % 2 == 1){
            tabA[i] = tab[i] * 3 + 1;
        }
        wypisz(i, n, tabA[i]);
    }
    printf("b)\n");
    for(int i = 0; i < n; i++){
        if(tabB[i] % 2 == 0){
            tabB[i] *= -1;
        }else{
            tabB[i] *= 2;
        }
        wypisz(i, n, tabB[i]);
    }
    for(int i = 0; i < n; i++){
        if(tabB[i] > 0){
            tabB[i] = 1;
        }else{
            tabB[i] = -1;
        }
        wypisz(i, n, tabB[i]);
    }
    printf("c)\nPodaj dwie liczby wieksze od 0 i mniejsze od n\n");
    int lewy, prawy;
    scanf("%d %d", &lewy, &prawy);
    while(lewy < prawy){
        int pomoc;
        pomoc = tabC[lewy];
        tabC[lewy] = tabC[prawy];
        tabC[prawy] = pomoc;
        lewy++;
        prawy--;
    }
    for(int i = 0; i < n; i++){
        wypisz(i, n, tabC[i]);
    }
    printf("d)\n");
    int parzyste = 0, nieParzyste = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] % 2 == 0)
            parzyste++;
        else
            nieParzyste++;
    }
    printf("Parzyste: %d, nie parzyste: %d\ne)", parzyste, nieParzyste);
    int najWieksza = 0, ile = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] > najWieksza)
            najWieksza = tab[i];
    }
    for(int i = 0; i < n; i++){
        if(tab[i] == najWieksza)
            ile++;
    }
    printf("W tablicy liczba %d jest najwieksza i wystepuje %d razy", najWieksza, ile);
    return 0;
}
