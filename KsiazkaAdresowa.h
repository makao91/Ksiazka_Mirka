#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenager.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa
{

UzytkownikMenager uzytkownikMenager;
AdresatMenadzer *adresatMenadzer;
const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa ( string nazwaPlikuZuzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenager(nazwaPlikuZuzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        adresatMenadzer = NULL;
    };
    ~KsiazkaAdresowa()
    {
      delete adresatMenadzer;
      adresatMenadzer = NULL;
    };

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika ();
    int idZalogowanegoUzytkownika();
    void dodajAdresata ();
    void wyswietlWszystkichAdresatow();
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    bool czyUzytkownikZalogowany();

};
#endif
