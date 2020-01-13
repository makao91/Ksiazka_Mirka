#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>


#include "Adresat.h"
#include "MetodyPomocnicze.h"


using namespace std;

class PlikZAdresatami
{
const string nazwaPlikuZAdresatami;
int idOstatniegoAdresata;
string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI)
    {
        idOstatniegoAdresata=0;
    };


    int pobierzIdOstatniegoAdresata ();

    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);

};
#endif
