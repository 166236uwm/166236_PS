#include <stdio.h>

int NWD(int a, int b){
    if(a % b == 0)
        return b;
    else
        return NWD(b, a % b);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("a)\n");
    for(int i = 1; i < n; i++){
        if(NWD(n, i) == 1)
            printf("%d, ", i);
    }
    printf("\nb)\n");
    for(int i = 1; i < n; i++){
        int sumaDzielnikow = 0;
        for(int j = 1; j < i; j++){
            if(i % j == 0)
                sumaDzielnikow += j;
        }
        if(sumaDzielnikow == i)
            printf("%d, ", i);
    }
    printf("\nc)\n");
    for(int i = 1; i < n; i++){
        int prime = 1;
        if(n % i == 0){
            for(int j = 2; j < i; j++){
                if(i % j == 0)
                    prime = 0;
            }
            if(prime)
                printf("%d, ", i);
        }
    }
    printf("\nd)\n");
    int sum, fib = 1, oldFib = 1;
    for(int i = 0; i < n; i++){
            sum = fib + oldFib;
            oldFib = fib;
            fib = sum;
            if(fib >= n){
                printf("%d\n", oldFib);
                break;
            }
    }
    printf("e)\n");
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++ ){
            for(int h = 0; h <= n; h++){
                if(h * h + j * j + i * i == n){
                    printf("%d^2+%d^2+%d^2=%d,\n", i, j, h, n);
                    //gdyby szukany byl tylko jeden taki zestaw to:
                    //i = n + 1;
                    //dla przerwania petli
                }
            }
        }
    }
    return 0;
}
