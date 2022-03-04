#include <stdio.h>

int main() {
    int a, b, c;
    printf("Podaj trzy liczby calkowite: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a >= b){
        if(a >= c){
            printf("Najwieksza liczba z tych trzech to %d",a);
        }else{
            printf("Najwieksza liczba z tych trzech to %d",c);
        }
    }else{
        if(b >= c){
            printf("Najwieksza liczba z tych trzech to %d",b);
        }else{
            printf("Najwieksza liczba z tych trzech to %d",c);
        }
    }
    return 0;
}
