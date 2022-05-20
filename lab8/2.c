#include <stdio.h>
#include <stdlib.h>

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
size_t strlen(const char s[])
{
    size_t i=0;
    while(s[i])
        i++;
    return i;
}
char *strncpy(char t[], const char s[], size_t n)
{
    char *p = t;
    int i=0;
    while(s[i])
        i++;
    if(n>i)
        n=i;
    i=0;
    while(i<n)
    {
        t[i]=s[i];
        i++;
    }
    t[i]=0;
    return p;
}
char *strcat(char t[], const char s[])
{
    char *p = t;
    int i=0, j=0;
    while(t[j])
        j++;
    while(s[i])
    {
        t[j]=s[i];
        i++;
        j++;
    }
    t[j]=0;
    return p;
}
char *strncat(char t[], const char s[], size_t n)
{
    char * p = t;
    int i=0, j=0;
    while(t[j])
        j++;
    while(s[i])
        i++;
    if(n>i)
        n=i;
    i=0;
    while(i<n)
    {
        t[j]=s[i];
        i++;
        j++;
    }
    t[j]=0;
    return p;
}

int main()
{
    char s[] = "basia i kasia";
    char * p = calloc(strlen(s) + 1, sizeof(char));
    strcpy(p,s);
    printf("%s\n", s);
    printf("%s\n", p);
    printf("%s\n",strcpy(p,s));
    printf("%d\n",strlen(s));
    printf("%s\n",strncpy(p,s,5));
    printf("%s\n",strcat(p,"test"));
    printf("%s\n",strncat(p,"test",2));
    free(p);
    return 0;
}
