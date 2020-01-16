#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
        uzytkownikMenager.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenager.logowanieUzytkownika();
    if (uzytkownikMenager.czyUzytkownikJestZalogowany())
    {
        adresatMenadzer = new AdresatMenadzer(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenager.pobierzIdZalogowanegoUzytkownika());
    }
     else
        {
            cout<<"Aby pracowac dalej, trzeba najpierw sie zalogowac"<<endl;
            system("pause");
        }

}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogowanieUzytkownika ()
{
     uzytkownikMenager.wylogowanieUzytkownika();
     delete adresatMenadzer;
     adresatMenadzer = NULL;
}
int KsiazkaAdresowa::idZalogowanegoUzytkownika()
{
    return uzytkownikMenager.pobierzIdNowegoUzytkownika();
}
void KsiazkaAdresowa::dodajAdresata()
{
    if (uzytkownikMenager.czyUzytkownikJestZalogowany())
    {
        adresatMenadzer->dodajAdresata();
    }
    else
        {
            cout<<"Aby pracowac dalej, trzeba najpierw sie zalogowac"<<endl;
            system("pause");
        }

}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenadzer->wyswietlWszystkichAdresatow();
}
vector <Adresat> KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    return adresatMenadzer->wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}
bool KsiazkaAdresowa::czyUzytkownikZalogowany()
{
    return uzytkownikMenager.czyUzytkownikJestZalogowany();

}
void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    adresatMenadzer->wyszukajAdresatowPoImieniu();
}
void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    adresatMenadzer->wyszukajAdresatowPoNazwisku();
}
void KsiazkaAdresowa::usunAdresata()
{
    adresatMenadzer->usunAdresata();
}
void KsiazkaAdresowa::edytujAdresata()
{
    adresatMenadzer->edytujAdresata();
}
