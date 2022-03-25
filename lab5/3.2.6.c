#include <stdio.h>

void idkCoTo(int n, int *w){
    *w = n;
}
int main() {
    printf("Podaj a i b\n");
    int a, b;
    scanf("%d %d", &a, &b);
    idkCoTo(a, &b);
    printf("a = %d, b = %d", a, b);
    return 0;
}
