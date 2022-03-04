#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, delta, x1, x2;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    delta = (b * b) - (4 * a * c);
    if(delta < 0){
        printf("Brak rozwiazan");
    }else if(delta == 0){
        x1 = ((-1) * b ) / (2 * a);
        printf("Jedno rowiazanie x1 = %f", x1);
    }else{
        x1 = ((-1) * b - sqrt(delta)) / (2 * a);
        x2 = ((-1) * b + sqrt(delta)) / (2 * a);
        printf("Dwa rozwiazanaia: x1 = %f  ", x1);
        printf("x2 = %f", x2);
    }
    return 0;
}
