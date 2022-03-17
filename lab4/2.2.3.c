#include <stdio.h>

int najDzielnik(int n){
    int dzielnik;
    for(int i = 1; i < n; i++){
        if(n % i == 0)
            dzielnik = i;
    }
    return dzielnik;
}

int main() {
    int n;
    printf("Podaj n > 2\n");
    scanf("%d", &n);
    int k = najDzielnik(n);
    printf("Najwiekszy dzielnik n mniejszy od n to %d.", k);
    return 0;
}
