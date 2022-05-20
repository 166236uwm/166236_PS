#include "DigitalClock.h"
#include <stdio.h>

DigitalClock makeDigitalClock(unsigned godzina, unsigned minuta){
    DigitalClock temp;
    temp.godzina = (godzina + minuta / 60) % 24;
    temp.minuta = minuta % 60;
}

void increment(DigitalClock *d, unsigned ileMinut){
    d -> minuta += ileMinut;
    if(d -> minuta > 59){
        d -> minuta -= 60;
        d -> godzina++;
    }
    if(d -> godzina > 23){
        d -> godzina -= 24;
    }
}

void incrementDefault(DigitalClock *d){
    increment(d, 1);
}

void decrement(DigitalClock *d, unsigned ileMinut){
    d -> minuta -= ileMinut;
    if(d -> minuta < 0){
        d -> minuta += 60;
        d -> godzina--;
    }
    if(d -> godzina < 0){
        d -> godzina += 24;
    }
}

void decrementDefault(DigitalClock *d){
    decrement(d, 1);
}

void showD(DigitalClock *d){
    printf("%d:%d\n", d -> godzina, d -> minuta);
}