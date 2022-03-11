#include <stdio.h>

int main() {
    printf("Podaj liczbe wieksza niz 2\n");
    unsigned int n = 0;
    int iloczyn = 1;
    scanf("%d", &n);
    if(n <= 2){
        printf("Ta liczba nie jest wieksza od 2\n");
        return 0;
    }
    for(int i = 2; i <= n; i += 2){
        printf("%d * %d = ", i, iloczyn);
        iloczyn *= i;
        printf("%d\n", iloczyn);
    }
    return 0;
}
