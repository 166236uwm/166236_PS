#include <stdio.h>

double stanORB(double RSO, double stanKonta, int liczbaLat){
    for(int i = 0; i < liczbaLat; i++){
        stanKonta += stanKonta * RSO;
    }
    return stanKonta;
}

int main() {
    double RSO = 0.03,
    sPK = 10000;
    int liczbaLat = 20;
    double stanKonta = stanORB(RSO, sPK, liczbaLat);
    printf("Stan Konta po %d latach = %lf\n", liczbaLat, stanKonta);
    return 0;
}
