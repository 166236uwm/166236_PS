#include <stdio.h>
#include <string.h>

void kopiuj(char *nap1, char *nap2)
{
    strcpy(nap2,nap1);
    printf("%s",nap2);
}

int main()
{
    char nap1[20] = "Karol";
    char nap2[20] = {'A', 'B', 'C', 'D'};
    kopiuj(nap1,nap2);
    return 0;
}