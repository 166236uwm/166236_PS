#include <stdio.h>
#include <math.h>

int main() {
    printf("Podaj n:\n");
    int n = 0;
    int iSq, jSq, cc, cSq;
    float c;
    scanf("%d", &n);
    for(int i = 2; i < n; i++) {
        iSq = i * i;
        for(int j = 2; j < n; j++){
            jSq = j * j;
            if(iSq > jSq)
                cSq = iSq - jSq;
            else if(iSq < jSq)
                cSq = jSq - iSq;
            else
                continue;
            c = sqrt(cSq);
            cc = c;
            if(c == cc){
                printf("%d, %d, %d to trojka pitagorejska\n", i, j, cc);
            }
        }
    }
    return 0;
}
