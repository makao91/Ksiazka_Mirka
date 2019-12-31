#include "Ksiazka adresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa ()
{
    uzytkownikMenager.wczytajUzytkownikowZPliku ();
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
        uzytkownikMenager.rejestracjaUzytkownika();
}




