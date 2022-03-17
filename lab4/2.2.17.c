#include <stdio.h>

int func(){
    static int i = 0;
    i++;
    return i;
}

int main() {
    int n, sum;
    printf("Podaj numer\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        sum = func();
    }
    printf("Funkcja zostala wywolana %d razy", sum);
    return 0;
}
