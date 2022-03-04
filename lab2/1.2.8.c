#include <stdio.h>

int main() {
    int a, b, c, sr;
    printf("Podaj trzy liczby\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("Ich srednia to: ");
    sr = (a+b+c)/3;
    printf("%d", sr);

    return 0;
}
