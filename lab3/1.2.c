#include <stdio.h>

double najmniejsza(double x, double y, double z){
    if(x > y){
        if(x > z)
            return x;
        else
            return z;
    }else if(y > z)
        return y;
    else
        return z;
}
double srednia(double x, double y, double z){
    return((x+y+z)/3);
}
double potega(double x, int y){
    double wynik = 1;
    for(int i = 0; i < y; i++){
        wynik += x;
    }
    return wynik;
}
int main() {
    printf("Podaj 3 liczby\n");
    double x = 0, y = 0, z = 0, naj, sr, pot;
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);

    naj = najmniejsza(x, y, z);
    sr = srednia(x,y,z);
    pot = potega(x,y);
    printf("%lf   %lf    %lf", naj, sr, pot);
    return 0;
}
