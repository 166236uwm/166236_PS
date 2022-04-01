#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int n, short min, short max){
    srand(time(NULL));
    for(short *p = tab; p < tab + n; p++){
        *p = (rand() % (max - min + 1)) + min;
    }
}

int main() {
    int tab[100];
    generuj(tab, 100, 50,52);
    for(short *p = tab; p < tab + 100; p++){
        printf("%5d", *p);
    }
    return 0;
}
