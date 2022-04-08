#include <stdio.h>
#include <stdlib.h>


int funkcja(int n, int m, int p){
    int wynik = 1;
    if(n == 0 && m == 0 && p == 0){
        printf("Zadna z liczb nie jest rozna od zera!\n");
        return -1;
    }else if(p == 0){
        printf("Nie mozna dzielic przez 0\n");
        return -1;
    }
    for(int i = 0; i < m; i++){
        wynik *= n;
    }
    return wynik / p;
}

int main()
{
    printf("Podaj n, m oraz p (n^m/p)\n");
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p);
    int wynik = funkcja(n, m, p);
    printf("\nWynik = %d", wynik);
    return 0;
}
