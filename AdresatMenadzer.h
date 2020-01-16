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
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    char wybierzOpcjeZMenuEdycja();

public:
    AdresatMenadzer (string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) : plikZAdresatami (nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

void dodajAdresata();
void wyswietlWszystkichAdresatow();
vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku();
void wyszukajAdresatowPoImieniu();
void wyszukajAdresatowPoNazwisku();
void usunAdresata();
void edytujAdresata();
};
#endif
