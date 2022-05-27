#ifndef PRACOWNIK_H
#define PRACOWNIK_H
#include <stdbool.h>

/*
Zdefiniuj stałą MAX_LEN równą 50,
a następnie zdefiniuj C-strukturę Pracownik o polach nazwisko typu char[MAX_LEN-1],
imie typu char[MAX_LEN-1],
wzrost typu float,
pensja typu double oraz czyManager typu bool.
Zdefiniuj następujące funkcje:
*/
#define MAX_LEN 50

typedef struct Pracownik{
    char nazwisko[MAX_LEN-1];
    char imie[MAX_LEN-1];
    float wzrost;
    double pensja;
    bool czyManager;
}Pracownik;

// Tworzy strukturę Pracownik
Pracownik makePracownik(const char *nazwisko, const char *imie, float wzrost, double pensja, bool czyManager);

// Tworzy kopię Pracownika
Pracownik makePracownikCopy(const Pracownik *prac);

// Zwiększa pensję danego pracownika o inflację 12,3%
void podwyzka(Pracownik *prac, float inflacja);

// Wyświetla dane Pracownika
void show(const Pracownik *prac);

#endif
