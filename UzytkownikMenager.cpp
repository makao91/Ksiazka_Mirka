#include "UzytkownikMenager.h"

void UzytkownikMenager::rejestracjaUzytkownika()
{
    system("cls");
     Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);

    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");

}

Uzytkownik UzytkownikMenager::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    do
    {
        cout << "Podaj login: ";
        uzytkownik.ustawLogin(MetodyPomocnicze::wczytajLinie());
    }
    while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
    uzytkownik.ustawHaslo(MetodyPomocnicze::wczytajLinie());

    return uzytkownik;
}
int UzytkownikMenager::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool UzytkownikMenager::czyIstniejeLogin(string login)
{
    for (int i=0; i<uzytkownicy.size(); i++)
    {
        if (uzytkownicy[i].pobierzLogin()==login)
        {
             cout<<endl<<"Istnieje uzytkownik o takim loginie."<<endl;
            return true;
        }

    }
    return false;
}

void UzytkownikMenager::wczytajUzytkownikowZPliku ()
{
 uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}
void UzytkownikMenager::zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy)
{
    plikZUzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}

int UzytkownikMenager::logowanieUzytkownika()
{
    string login = "", haslo = "";

    cout << endl << "Podaj login: ";
    login = MetodyPomocnicze::wczytajLinie();

    for (int i=0; uzytkownicy.size()>i; i++)
    {
        if (uzytkownicy[i].pobierzLogin()==login)
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = MetodyPomocnicze::wczytajLinie();

                if (uzytkownicy[i].pobierzHaslo()==haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    return idZalogowanegoUzytkownika=uzytkownicy[i].pobierzId();
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return 0;
        }
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    return 0;
}

int UzytkownikMenager::wylogowanieUzytkownika ()
    {
        uzytkownicy.clear();
        return idZalogowanegoUzytkownika=0;
    }

void UzytkownikMenager::zmianaHaslaZalogowanegoUzytkownika()
{
    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    noweHaslo = MetodyPomocnicze::wczytajLinie();

    for (int i=0; uzytkownicy.size()>i; i++)
    {
        if (uzytkownicy[i].pobierzId() == idZalogowanegoUzytkownika)
        {
            uzytkownicy[i].ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }
    zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}
