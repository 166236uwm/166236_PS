#include <stdio.h>

int main() {
    printf("Podaj m oraz n (musza to byc liczby calkowite dodatnie!)\n");
    unsigned int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    if(m < 0 || n < 0){
        printf("Jedna ze zmiennych jest mniejsza niz zero!");
        return 0;
    }
    for(int i = 1; i <= m; i++){
        printf("%d * %d = %d\n", i, n, i*n);
    }
    return 0;
}
