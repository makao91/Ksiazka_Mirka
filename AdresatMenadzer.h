#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include <cstdlib>

#include "Adresat.h"
#include "PlikZAdresatami.h"


using namespace std;


class AdresatMenadzer
{
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    int idOstatniegoAdresata;
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    //int pobierzIdNowegoAdresata();

public:
    AdresatMenadzer (string nazwaPlikuZAdresatami) : plikZAdresatami (nazwaPlikuZAdresatami)
    {

    };

void dodajAdresata(int idZalogowanegoUzytkownika);
//void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
};
#endif
