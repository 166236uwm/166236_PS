#include <stdio.h>
#include <string.h>
#include "pracownik.h"

Pracownik makePracownik(const char *nazwisko, const char *imie, float wzrost, double pensja, bool czyManager) {
    Pracownik temp;

    strcpy(temp.nazwisko, nazwisko);
    strcpy(temp.imie, imie);
    temp.wzrost = wzrost;
    temp.pensja = pensja;
    temp.czyManager = czyManager;

    return temp;
}

Pracownik makePracownikCopy(const Pracownik *prac) {
    Pracownik temp;
    strcpy(temp.nazwisko, prac -> nazwisko);
    strcpy(temp.imie, prac ->imie);
    temp.wzrost = prac -> wzrost;
    temp.pensja = prac -> pensja;
    temp.czyManager = prac -> czyManager;

    return temp;
}

void podwyzka(Pracownik *prac, float inflacja) {
    prac -> pensja *= (1 + inflacja);
}

// Wyświetla dane Pracownika
void show(const Pracownik *prac) {

    printf("Nazwiskio: %s\n", prac -> nazwisko);
    printf("Imie: %s\n", prac -> imie);
    printf("Pensja: %lf zl\n", prac -> pensja);
    printf("Wzrost: %f m\n", prac -> wzrost);
    if(prac -> czyManager)
        printf("Stanowisko: Manager\n");
    else
        printf("Stanowisko: Szeregowy\n");
}



