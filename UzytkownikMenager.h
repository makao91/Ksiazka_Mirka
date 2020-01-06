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

    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;
    int idZalogowanegoUzytkownika;
    Uzytkownik podajDaneNowegoUzytkownika ();

    bool czyIstniejeLogin (string login);

public:

    UzytkownikMenager ( string nazwaPlikuZuzytkownikami) : plikZUzytkownikami(nazwaPlikuZuzytkownikami)
    {

    };
    int pobierzIdNowegoUzytkownika ();
    void rejestracjaUzytkownika ();
    void wczytajUzytkownikowZPliku ();
    int logowanieUzytkownika();
    int wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
};
#endif
