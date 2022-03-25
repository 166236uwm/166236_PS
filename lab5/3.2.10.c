#include <stdio.h>
#include <stdlib.h>
int reserve(){
     int *ptr;
     ptr = (int*) malloc(sizeof(double));
}
int main() {
    int *pointr;
    pointr = reserve();
    printf("%d", pointr);
    return 0;
}
