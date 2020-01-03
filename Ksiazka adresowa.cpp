#include "Ksiazka adresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
        uzytkownikMenager.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenager.logowanieUzytkownika();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogowanieUzytkownika ()
{
    uzytkownikMenager.wylogowanieUzytkownika();
}
int KsiazkaAdresowa::idZalogowanegoUzytkownika()
{
    return uzytkownikMenager.idZalogowanegoUzytkownika;
}



