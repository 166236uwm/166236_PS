#include <stdio.h>

void kopiuj(char *nap1, char *nap2, int *n){
    for(int i=0;i<n;i++){
        nap2[i] = nap1[i];
    }
    printf("%s \n", nap2);
}
int main(){
    char nap1[10], nap2[10];
    int n;
    printf("Podaj napis pierwszy: \n");
    scanf("%s", &nap1);
    printf("Podaj napis drugi: \n");
    scanf("%s", &nap2);
    printf("Podaj ilosc znakow: \n");
    scanf("%d", &n);
    kopiuj(nap1, nap2, n);
    return 0;
}
