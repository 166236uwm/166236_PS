#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Podaj kolejno a, b, c i d\n");
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    int i = 0;
    while((abs(a) * i * i + b * i + c) <= d){
        i++;
    }
    printf("a)\n|%d| * %d^2 + %d * %d + %d \n",a, i, b, i, c);
    i = 0;
    int lastI = 0;
    while(i > -1){
        if(((5 * i * i) + (i * a) + b) < c){
            lastI = i;
        }
        i++;
    }
    printf("b)\n5 * %d ^ 2 + %d * %d + %d < c \n", lastI, a, lastI ,b, c);
    i = 0;
    lastI = 0;
    while(i > -1){
        if(((5 * i * i) + (i * a) + b) <= c){
            lastI = i;
        }
        i++;
    }
    printf("c)\n5 * %d ^ 2 + %d * %d + %d <= c \n", lastI, a, lastI ,b, c);

    return 0;
}
