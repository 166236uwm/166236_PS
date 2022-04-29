#include <stdio.h>

void przepisz(char *n, char *n1)
{
    int i=0;
    while(n[i]!=0){
        n1[i]=n[i];
        i++;
    }
    printf("%s", n1);
}
int main()
{
    char napis[10], napis1[10];
    printf("Podaj napis pierwszy: \n");
    scanf("%s", &napis);
    printf("Podaj napis drugi: \n");
    scanf("%s", &napis1);
    przepisz(napis, napis1);
    return 0;
}

