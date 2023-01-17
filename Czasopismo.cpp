//
//  Czasopismo.cpp
//  Lab  6_1
//
//  Created by Marcin Ostolski on 12/06/2022.
//

#include <stdio.h>
#include <iostream>
#include "Pozycja.cpp"

using namespace std;

class Czasopismo: public Pozycja{
    int IloscStron;
public:
    Czasopismo()
    {
        IloscStron=1;
        ZwolnijRezerwacje();
        Oddaj();
        Pozycja::DodajNazwePozycji("Czasopismo");
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
        cout <<  "Ilosc Stron: " << IloscStron << endl << endl;
    }
    
    virtual void Stan()
    {
        cout << "Stan rezerwacji czasopisma: ";
        Pozycja::StanRezerwacji();
        cout << endl;
    }
};
