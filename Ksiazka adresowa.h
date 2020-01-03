#ifndef KSIAZKA ADRESOWA_H
#define KSIAZKA ADRESOWA_H

#include <iostream>

#include "UzytkownikMenager.h"

using namespace std;

class KsiazkaAdresowa
{

UzytkownikMenager uzytkownikMenager;

public:
    KsiazkaAdresowa (string nazwaPlikuZuzytkownikami) : uzytkownikMenager(nazwaPlikuZuzytkownikami)
    {
        uzytkownikMenager.wczytajUzytkownikowZPliku ();
    };
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
};
#endif
