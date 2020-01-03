#ifndef UZYTKOWNIKMENAGER_H
#define UZYTKOWNIKMENAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenager
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;

    Uzytkownik podajDaneNowegoUzytkownika ();
    int pobierzIdNowegoUzytkownika ();
    bool czyIstniejeLogin (string login);

public:
    UzytkownikMenager (string nazwaPlikuZuzytkownikami) : plikZUzytkownikami(nazwaPlikuZuzytkownikami){};
    void rejestracjaUzytkownika ();
    void wczytajUzytkownikowZPliku ();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void zapiszWszystkichUzytkownikowDoPliku(vector<Uzytkownik>uzytkownicy);
};
#endif
