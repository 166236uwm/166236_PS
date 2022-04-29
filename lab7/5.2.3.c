#include <stdio.h>

int porownaj(const char *str1, const char *str2){
    const unsigned char *ustr1 = (const unsigned char *) str1;
    const unsigned char *ustr2 = (const unsigned char *) str2;
    while(*ustr1 != '\0'){
        if(*ustr1 != *ustr2){
            return 0;
        }
        ustr1++;
        ustr2++;
    }
    return 1;
}
int wporownaj(wchar_t *n, wchar_t *n1)
{
    int i=0;
    while(n[i]!=0)
        i++;
    int j=0;
    while(n1[j]!=0)
        j++;
    if (i==j)
        return 1;
    else
        return 0;
}

int main() {
    char str1[20];
    char str2[20];
    printf("Wprowadz napis\n");
    scanf("%s", str1);
    printf("Wprowadz drugi napis\n");
    scanf("%s", str2);
    printf("%d", porownaj(str1, str2));
    wchar_t wstr1[20];
    wchar_t wstr2[20];
    printf("Wprowadz napis\n");
    scanf("%s", wstr1);
    printf("Wprowadz drugi napis\n");
    scanf("%s", wstr2);
    printf("%d", wporownaj(wstr1, wstr2));

    return 0;
}
