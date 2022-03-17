#include <stdio.h>

int func(int n){
    if(n > 0)
        return 2 * func(n-1) + 5;
    else
        return 1;
}

int main() {
    int n;
    printf("Podaj n \n");
    scanf("%d", &n);
    printf("an dla n = %d wynosi %d", n, func(n));
    return 0;
}
