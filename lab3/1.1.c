#include <stdio.h>

int sgn(double x){
    double numb = x;
    if(numb > 0)
        return 1;
    else if(numb < 0)
        return -1;
    else
        return 0;
}

int main() {
    double number;
    scanf("%f", &number);
    double a = sgn(number);
    printf("%lf", a);
    return 0;
}
