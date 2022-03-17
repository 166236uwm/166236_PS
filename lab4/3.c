#include <stdio.h>

int func(int *a, int *b){
    if(*a > *b)
        return *b;
    else
        return *a;
}

int main() {
    int a, b;
    printf("Podaj a i b\n");
    scanf("%d %d", &a, &b);
    printf("%d",func(&a, &b));
    return 0;
}
