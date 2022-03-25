#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generuj(int tab[], int n, int min, int max){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        tab[i] = (rand() %(max - min + 1)) + min;
    }
}

int main() {
    int tab[100];
    generuj(tab, 100, 50,52);
    for(int i = 0; i < 100; i++){
        printf("%d\n", tab[i]);
    }
    return 0;
}
