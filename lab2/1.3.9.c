#include <stdio.h>

int main() {
    char znak;
    int a, b, wynik;
    printf("Wybierz znak odpowiadajacy dzialaniu ktore chcesz przeprowadzic z: +, -, *, / \n");
    scanf("%c", &znak);
    printf("Podaj pierwsza liczbe na ktorej bedziemy dzialac: \n");
    scanf("%d", &a);
    printf("Podaj druga liczbe: \n");
    scanf("%d", &b);
    switch(znak){
        case '+':
            wynik = a + b;
            break;
        case '-':
            wynik = a - b;
            break;
        case '*':
            wynik = a * b;
            break;
        case '/':
            wynik = a / b;
            break;
        default:
            printf("ERROR");
            return 0;
    }
    printf("Wynik = %d", wynik);
    return 0;
}
