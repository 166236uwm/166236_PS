#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Podaj liczbe n > 0\n");
    float n;
    do{
        scanf("%f", &n);
    }while(n < 1);
    float num;
    int ujemne = 0, podzielnePrzezTrzy = 0;
    for(int i = 0; i < n; i++){
        printf("Podaj liczbe nr %d\n", i + 1);
        scanf("%f", &num);
        if(num < 0)
            ujemne++;
        int c = ceil(num);
        if(c % 3 == 0)
            podzielnePrzezTrzy++;
    }
    printf("Z podanych liczb %d byly ujemne a sufit %d liczb byl podzielny przez 3", ujemne, podzielnePrzezTrzy);
    return 0;
}
