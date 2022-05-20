#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

typedef struct DigitalClock{
    unsigned godzina;
    unsigned minuta;
}DigitalClock;

DigitalClock makeDigitalClock(unsigned godzina, unsigned minuta);

void showD(DigitalClock *d);

void increment(DigitalClock *d, unsigned ileMinut);

void incrementDefault(DigitalClock *d);

void decrement(DigitalClock *d, unsigned ileMinut);

void decrementDefault(DigitalClock *d);

#endif DIGITALCLOCK_H
