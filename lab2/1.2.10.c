#include <stdio.h>

int main() {
    float x;
    printf("Podaj liczbe wymierna: ");
    scanf("%f",&x);
    if(x<0){
        x = (-1) * x;
    }
    printf("Wartosc bezwzgledna tej liczby to : %f", x);
    return 0;
}
