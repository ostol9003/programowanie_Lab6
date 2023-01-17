//
//  Slownik.cpp
//  Lab  6_1
//
//  Created by Marcin Ostolski on 12/06/2022.
//


#include <stdio.h>
#include <iostream>
#include "Pozycja.cpp"

using namespace std;

class Slownik: public Pozycja{
    int IloscHasel;
public:
    Slownik()
    {
        IloscHasel=1;
        ZwolnijRezerwacje();
        Oddaj();
        Pozycja::DodajNazwePozycji("Slownik");
        WyswietlDane();
    }
    virtual void WpiszDane()
    {
        Pozycja::WpiszDane();
        cout << "Podaj ilosc hasel: " << flush;
        cin >> IloscHasel;
        
    }
    virtual void WyswietlDane()
    {
        Pozycja::WyswietlDane();
        cout <<  "Ilosc hasel: " << IloscHasel << endl << endl;
    }
    
    virtual void Stan()
    {
        cout << "Stan rezerwacji slownika: ";
        Pozycja::StanRezerwacji();
        cout << endl;
    }
};

