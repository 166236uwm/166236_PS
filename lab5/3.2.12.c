#include <stdio.h>
#include <stdlib.h>

int reserve(int n){
    int *ptr;
    ptr = malloc(n * sizeof(double));
    return ptr;
}
int main() {
    printf("Podaj n\n");
    int n;
    scanf("%d", &n);
    int *pointr;
    pointr = reserve(n);
    printf("Memory reserved!\n");
    return 0;
}
