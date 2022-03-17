#include <stdio.h>

int twoToThePower(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
        num *= 2;
    }
    return num;
}

int main() {
    int num;
    printf("Podaj calkowite n > 0\n");
    scanf("%d", &num);
    printf("2 ^ n = %d", twoToThePower(num));
    return 0;
}
