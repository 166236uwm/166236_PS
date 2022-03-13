#include <stdio.h>

int pierwsza_cyfra(int n){
    if(n < 10)
        return n;
    int placeHolder;
    for(int i = 10; i < n; i *= 10){
        placeHolder = n / i;
    }
    return placeHolder;
}

int ostatnia_cyfra(int n){
    return n % 10;
}

int ile_cyfr(int n){
    int i = 0;
    while(n > 0){
        n /= 10;
        i++;
    }
    return i;
}

int main() {
    int n = 284;
    printf("n = %d\n pierwsza cyfra = %d\n ostatnia cyfra = %d\n liczba cyfr = %d",
           n, pierwsza_cyfra(n), ostatnia_cyfra(n), ile_cyfr(n));
    return 0;
}
