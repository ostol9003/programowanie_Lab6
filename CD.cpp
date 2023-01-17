//
//  CD.cpp
//  Lab  6_1
//
//  Created by Marcin Ostolski on 12/06/2022.
//

#include <stdio.h>
#include "Multimedia.cpp"

using namespace std;

class CD : public Multimedia{
    int IloscStron;
public:
    CD(){
    IloscStron=1;
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

        
    }
    virtual void WyswietlDane()
    {
        Pozycja::WyswietlDane();
        cout <<  "Ilosc Stron: " << IloscStron << endl;

    }
    
    virtual void Stan()
    {
        cout << "Stan rezerwacji DVD: ";
        Pozycja::StanRezerwacji();
        cout << endl;
    }
    
};
