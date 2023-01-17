//
//  Ksiazka.cpp
//  Lab  6_1
//
//  Created by Marcin Ostolski on 12/06/2022.
//
#include "Pozycja.cpp"
#include <stdio.h>
#include <iostream>


using namespace std;

class Ksiazka: public Pozycja{
    string Autor;
    int IloscStron;
public:
    Ksiazka(){
        Autor ="NoAuthor";
        IloscStron=1;
        ZwolnijRezerwacje();
        Oddaj();
        Pozycja::DodajNazwePozycji("Ksiazka");
        WyswietlDane();
    }
    virtual void WpiszDane(){
        Pozycja::WpiszDane();
        cout << "Podaj autora: " << flush;
        cin >> Autor;
        cout << "Podaj ilosc stron: " << flush;
        cin >> IloscStron;
    }
    virtual   void WyswietlDane(){
        Pozycja::WyswietlDane();
        cout << "Autor: " << Autor << "\nIlosc Stron: " << IloscStron << endl<<endl;
    }
    
    virtual void Stan() {cout << "Stan rezerwacji ksiazki: ";
        Pozycja::StanRezerwacji();
        cout << endl;
        
    }
};

