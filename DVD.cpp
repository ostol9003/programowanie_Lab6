//
//  DVD.cpp
//  Lab  6_1
//
//  Created by Marcin Ostolski on 12/06/2022.
//


#include <stdio.h>
#include "Multimedia.cpp"
using namespace std;

class DVD : public Multimedia{
    int IloscStron;
    int IloscWarstw;
public:
    DVD(){
    IloscStron=2;
    IloscWarstw=2;
    Multimedia::UstalPojemnosc(100);
    ZwolnijRezerwacje();
    Oddaj();
    Pozycja::DodajNazwePozycji("DVD");
    WyswietlDane();
    }
    virtual void WpiszDane()
    {
        Pozycja::WpiszDane();
        cout << "Podaj ilosc stron: " << flush;
        cin >> IloscStron;
        cout << "Podaj ilosc warstw: " << flush;
        cin >> IloscWarstw;
        
    }
    virtual void WyswietlDane()
    {
        Pozycja::WyswietlDane();
        cout <<  "Ilosc Stron: " << IloscStron << endl;
        cout <<  "Ilosc Warstw: " << IloscWarstw << endl << endl;
    }
    
    virtual void Stan()
    {
        cout << "Stan rezerwacji DVD: ";
        Pozycja::StanRezerwacji();
        cout << endl;
    }
};
