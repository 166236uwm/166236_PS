#include <stdio.h>

int mToThePowerOfN(int n, int m){
    int num = 1;
    for(int i = 0; i < m; i++){
        num *= n;
    }
    return num;
}

int main() {
    int n, m;
    printf("Podaj n i m, obie liczby musza byc calkowite, jedna wieksza od zera, druga nieujemna\n");
    scanf("%d", &n);
    scanf("%d", &m);
    if(m < 0||n < 0)
        printf("Cos poszlo nie tak\n");
    else
        printf("n ^ m = %d", mToThePowerOfN(m, n));
    return 0;
}
