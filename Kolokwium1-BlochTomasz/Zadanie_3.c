#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ostCyfra(int n){
    return n%10;
}

void test(int n){
    for(int i = 0; i < n; i++){
        int num = rand();
        printf("Ostatnia cyfra liczby %d jest %d\n", num, ostCyfra(num));
    }
}

int main()
{
    srand(time(NULL));
    printf("Podaj ile razy mam przetestowac funkcje\n");
    int n;
    scanf("%d", &n);
    test(n);
    return 0;
}
