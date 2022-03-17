#include <stdio.h>

int main() {
    int a = 6;
    int *p = &a;
    printf("%d, %d, %d, %d, %d, %d\n", *p, &p, *&p, &*p, &a, *&a);
    return 0;
}
