#include <stdio.h>

char* strncpyEven(char *t, const char *s, unsigned int n);

int main(void) {
    char str1[50] = "";
    char str2[50] = "jajobajo";
    printf("%s",strncpyEven(str1, str2,30));
}
char* strncpyEven(char *t, const char *s, unsigned int n){
    int nll = 0;
    for(int i = 0; i < n * 2 + 1; i++){
        if(s[i] == '\0'){
            nll = i;
            break;
        }
    }
    if(nll > n)
        nll = n;
    for(int i = 0; i <= nll; i ++){
        t[i] = s[i * 2 + 1];
    }
    return t;
}
