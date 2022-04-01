#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generuj(short tab[], int n, short min, short max){
    srand(time(NULL));
    for(short *p = tab; p < tab + n; p++){
        *p = (rand() % (max - min + 1)) + min;
    }
}
int ileDodatnich(const short tab[],int n);
int ileUjemnych(const short tab[],int n);
int ileZerowych(const short tab[],int n);
short sumaDodatnich(const short tab[], int n);
short sumaUjemnych(const short tab[], int n);
int dlugoscMaksymalnaCiaguDodatnich(const int tab[], int n);
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

int ileUjemnych(const short tab[],int n){
    int nieParzyste = 0;
    for(short *p = tab; p < tab + n; p++){
        if(*p < 0)
            nieParzyste++;
    }
    return nieParzyste;
}
int ileDodatnich(const short tab[],int n){
    int parzyste = 0;
    for(short *p = tab; p < tab + n; p++){
        if(*p > 0)
            parzyste++;
    }
    return parzyste;
}
int ileZerowych(const short tab[],int n){
    int zerowe = 0;
    for(short *p = tab; p < tab + n; p++){
        if(*p == 0)
            zerowe++;
    }
    return zerowe;
}

short sumaDodatnich(const short tab[], int n){
    int suma = 0;
    for(short *p = tab; p < tab + n; p++){
        if(*p > 0)
            suma += *p;
    }
    return suma;
}
short sumaUjemnych(const short tab[], int n){
    int suma = 0;
    for(short *p = tab; p < tab + n; p++){
        if(*p < 0)
            suma += *p;
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