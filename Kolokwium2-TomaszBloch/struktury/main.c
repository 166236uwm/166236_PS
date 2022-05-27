#include <stdio.h>
#include "pracownik.h"
#include <string.h>

bool czyPrawidlowaPensja (double pensja);
bool czyPrawidlowyWzrost (float wzrost);

int main(int argc, char *argv[])
{
    double inflacja = 0.123;
    /* 1) Poproś użytkownika o wpisanie danych pracownika.
    Zabezpiecz dane! Zakładamy,
    że czlowiek moze miec wzrost z zakresu 1.40-2.20 m,
    a pensja minimalna powinna być nie mniejsza niz 3010 zl.
    Napisz odpowiednie funkcje sprawdzające poprawność danych.
    */
    char nazwisko[50];
    char imie[50];
    float wzrost;
    double pensja;
    bool czyManager;
    int temp;

    printf("Podaj dane pracownika: \n");
    printf("Nazwisko: ");
    scanf("%s", nazwisko);
    printf("\nImie: ");
    scanf("%s", imie);
    printf("\nWzrost w metrach: ");
    scanf("%f", &wzrost);
    printf("\nPensja w zl: ");
    scanf("%lf", &pensja);
    printf("\nCzy Menager: ");
    scanf("%d", &temp);
    czyManager = temp;

    if(!czyPrawidlowaPensja(pensja))
        printf("Pracownik ma za mala pensje!\n");
    if(!czyPrawidlowyWzrost(wzrost))
        printf("Pracownik ma nieprawidlowy wzrost!\n");
     // 2) Zainicjalizuj strukturę o nazwie prac1 wprowadzonymi danymi.
    Pracownik prac1 = makePracownik(nazwisko, imie, wzrost, pensja, czyManager);
    // 3) Stwórz strukturę o nazwie prac2 kopiując obiekt prac1.
    Pracownik prac2 = makePracownikCopy(&prac1);
    // 4) Stwórz strukturę o nazwie prac3 kopiując obiekt prac1.
    Pracownik prac3 = makePracownikCopy(&prac1);
    // 5) Zmień nazwisko pracownika prac1 na Kowalski
    char nazw[50] = "Kowalski";
    strcpy(prac1.nazwisko, nazw);
    // 6) Zmień nazwisko pracownika prac2 na Nowak
    char nazw2[50] = "Nowak";
    strcpy(prac2.nazwisko, nazw2);
    // 7) Zmień nazwisko pracownika prac3 na Nowakowski
    char nazw3[50] = "Nowakowski";
    strcpy(prac3.nazwisko, nazw3);
    // 8) Zmień wzrost pracownika na prac2 na 2.02
    prac2.wzrost = 2.02;
    // 9) Zmień czyManager pracownika prac3 na true
    prac3.czyManager = true;
    // 10) Podnieś pensję pracownika prac1 o inflację
    podwyzka(&prac1, inflacja);
    // 11) Wypisz informacje o obiektach prac1, prac2, prac3
    show(&prac1);
    show(&prac2);
    show(&prac3);
    // 12) stwórz tablicę o nazwie tab trzech Pracowników
    Pracownik tab[3];
    /* 13) W pętli for do przechodzenia tablicy zamiast indeksów należy użyć wskaźników,
    a każdy operator indeksowania należy zastapić operatorem dereferencji!! */

    // Przejdź tablicę i wypełnij ją Pracownikami uzywając odpowiedniej funkcji.


    // 14) W pętli for do przechodzenia tablicy zamiast indeksów należy użyć wskaźników, a każdy operator indeksowania należy zastapić operatorem dereferencji!!
    // Wypisz informacje o wszystkich obiektach typu Pracownik znajdujących sie w tablicy tab

}
bool czyPrawidlowaPensja (double pensja){
    if(pensja < 3010)
        return false;
    return true;
}
bool czyPrawidlowyWzrost (float wzrost){
    if(wzrost < 1.40 || wzrost > 2.2)
        return false;
    return true;
}
