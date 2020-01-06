#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
        uzytkownikMenager.rejestracjaUzytkownika();
}
int KsiazkaAdresowa::logowanieUzytkownika()
{
    return uzytkownikMenager.logowanieUzytkownika();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}
int KsiazkaAdresowa::wylogowanieUzytkownika ()
{
    return uzytkownikMenager.wylogowanieUzytkownika();
}
int KsiazkaAdresowa::idZalogowanegoUzytkownika()
{
    return uzytkownikMenager.pobierzIdNowegoUzytkownika();
}
void KsiazkaAdresowa::dodajAdresata(int idUzytkownika)
{
    adresatMenadzer.dodajAdresata(idUzytkownika);
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow(int idUzytkownika)
{
    adresatMenadzer.wyswietlWszystkichAdresatow(idUzytkownika);
}

