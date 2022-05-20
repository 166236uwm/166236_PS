#include <stdio.h>
#include <stdlib.h>

int strindex(const char t[], const char s[])
{
    int i=0, j=0, k=0, l;
    while(s[i])
        i++;
    while(t[j])
    {
        if(t[j]==s[k])
        {
            l=j;
            while(t[l]==s[k])
            {
                l++;
                k++;
            }
            if(i==k)
                return j;
            k=0;
        }
        j++;
    }
    return -1;

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
    char *p = calloc(strlen(s) + 1, sizeof(char));
    strcpy(p,s);
    printf("%d",strindex(p,s));
    return 0;
}
