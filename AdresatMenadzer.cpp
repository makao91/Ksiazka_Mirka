#include "AdresatMenadzer.h"


void AdresatMenadzer::dodajAdresata()
{
    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;

    Adresat adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    if (plikZAdresatami.dopiszAdresataDoPliku(adresat))
        cout<<"Nowy adresat zostal dodany"<<endl;
    else
    cout<<"Blad. Nie udaøo sie dodac nowego adresata do pliku"<<endl;
    system("pause");

  }
Adresat AdresatMenadzer::podajDaneNowegoAdresata()
{
    Adresat adresat;


    adresat.ustawId((plikZAdresatami.pobierzIdOstatniegoAdresata()+1));

    adresat.ustawIdUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA);

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());
    adresat.pobierzImie() = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie());

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko (MetodyPomocnicze::wczytajLinie());
    adresat.pobierzNazwisko() = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko());

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}
void AdresatMenadzer::wyswietlWszystkichAdresatow()
{
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (int i=0; i<adresaci.size(); i++)
        {
            wyswietlDaneAdresata(adresaci[i]);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}
void AdresatMenadzer::wyswietlDaneAdresata(Adresat adresat)
{
    cout << endl << "Id:                 " << adresat.pobierzId() << endl;
    cout << "Imie:               " << adresat.pobierzImie() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu() << endl;
    cout << "Email:              " << adresat.pobierzEmail()<< endl;
    cout << "Adres:              " << adresat.pobierzAdres() << endl;
}
vector <Adresat> AdresatMenadzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
   return plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
}
