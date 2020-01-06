#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenager.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa
{

UzytkownikMenager uzytkownikMenager;
AdresatMenadzer adresatMenadzer;

public:
    KsiazkaAdresowa ( string nazwaPlikuZuzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenager(nazwaPlikuZuzytkownikami), adresatMenadzer(nazwaPlikuZAdresatami)
    {
        uzytkownikMenager.wczytajUzytkownikowZPliku ();
    };
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int wylogowanieUzytkownika ();
    int idZalogowanegoUzytkownika();
    void dodajAdresata (int idUzytkownika);
    void wyswietlWszystkichAdresatow(int idUzytkownika);
};
#endif
