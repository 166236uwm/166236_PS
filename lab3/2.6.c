#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++ ){
            for(int h = 0; h <= n; h++){
                for(int k = 0; k <= n; k++){
                    if(k * k + h * h + j * j + i * i == n) {
                        printf("%d^2+%d^2+%d^2+%d^2=%d,\n", i, j, h, k, n);
                        i = n + 1;
                    }
                }
            }
        }
    }


    return 0;
}
