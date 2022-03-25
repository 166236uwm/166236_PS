#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generuj(int tab[], int n, int min, int max){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        tab[i] = (rand() %(max - min + 1)) + min;
    }
}
int ileDodatnich(const int tab[],int n){
    int ile = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] > 0)
            ile++;
    }
    return ile;
}

int ileUjemnych(const int tab[],int n){
    int ile = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] < 0)
            ile++;
    }
    return ile;
}

int ileZerowych(const int tab[],int n){
    int ile = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] == 0)
            ile++;
    }
    return ile;
}

int sumaDodatnich(int tab[], int n){
    int suma = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] > 0)
            suma += tab[i];
    }
    return suma;
}

int sumaUjemnych(int tab[], int n){
    int suma = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] < 0)
            suma += tab[i];
    }
    return suma;
}

int dlugoscMaksymalnaCiaguDodatnich(const int tab[], int n){
    int dlugosc[n];
    int ile = 0;
    for(int i = 0; i < n; i++){
        int j = i;
        do{
            ile = j - i;
            j++;
        }while(tab[j] > 0);
        dlugosc[i] = ile;
    }
    int naj = 0;
    for(int i = 0; i < n; i++){
        if(dlugosc[i] > naj)
            naj = dlugosc[i];
    }
    return naj;
}


int main() {
    int n;
    printf("Podaj n\n");
    scanf("%d", &n);
    int tab[n];
    generuj(tab, n, -99, 99);
    printf("a)  Dodatnich: %d, Ujemnych: %d, Zer: %d\n",
           ileDodatnich(tab, n), ileUjemnych(tab, n), ileZerowych(tab, n));
    printf("b)  Suma dodatnich: %d, suma ujemnych: %d\n",
           sumaDodatnich(tab, n), sumaUjemnych(tab, n));
    printf("c)  Najdluzszy ciag liczb dodatnich w tablicy wynosi: %d",
           dlugoscMaksymalnaCiaguDodatnich(tab, n));
    return 0;
}
