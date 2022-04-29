#include <stdio.h>
#include <stdlib.h>

void kopiuj(char *napis[], char** wskaznik){
    char* nowy;
    nowy = malloc(11);
    for (int i = 0; i < 11; i++)
        nowy[i] = napis[i];
    *wskaznik=nowy;
    printf("Adres starego napisu: %p \nAdres nowego: %p", &napis, &nowy);
}


int main(){
    char* napis="Warol";
    char* wskaznik;
    kopiuj(napis, &wskaznik);
    return 0;
}