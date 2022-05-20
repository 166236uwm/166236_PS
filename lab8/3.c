#include <stdio.h>
#include <stdlib.h>

int strend(const char t[], const char s[])
{
    int i=0, j=0;
    while(t[i])
    {
        if(t[i]==s[j])
            j++;
        else
            j=0;
        i++;
    }
    i=0;
    while(s[i])
        i++;
    if(i!=j)
        return 0;
    return 1;
}

char *strcpy(char t[], const char s[])
{
    char *p = t;
    int i=0;
    while(s[i])
    {
        t[i]=s[i];
        i++;
    }
    t[i]=0;
    return p;
}

int main()
{
    char s[] = "basia i kasia";
    char * p = calloc(strlen(s) + 1, sizeof(char));
    strcpy(p,s);
    printf("%d",strend(p,s));
    return 0;
}
