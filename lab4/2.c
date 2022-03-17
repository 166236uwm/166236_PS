#include <stdio.h>

int main() {
    //Ponizej wszystkie poprawne przypisania
    int a;
    int *p = &a;
    int *q = &a;
    printf("%d, %d\n", *p, *q);
    *p=*q;
    printf("%d\n", *p);
    return 0;
}
