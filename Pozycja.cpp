//
//  Pozycja.cpp
//  Lab  6_1
//
//  Created by Marcin Ostolski on 12/06/2022.
//
#ifndef Pozycja_cpp
#define Pozycja_cpp

//#pragma once 
#include <stdio.h>
#include <iostream>


using namespace std;
typedef unsigned int uint;

class Pozycja {
private:
    uint NrKatalogowy;
    uint ISBN;
    string Wydawca,pozycja;
    int DataWydania;
    bool Zarezerwowana;
    bool Wypozyczona;
public:
    Pozycja(){NrKatalogowy=0; ISBN=0;Wydawca="NoData";DataWydania=0000;ZwolnijRezerwacje();Oddaj();}
   
    void DodajNazwePozycji(string p){
        pozycja = p;
    }
    void Zarezerwuj(){Zarezerwowana = true;}
    void ZwolnijRezerwacje(){Zarezerwowana = false;}
    void Wypozycz()
    {
        Wypozyczona = true;
        ZwolnijRezerwacje();
    }
    void Oddaj(){Wypozyczona = false;}
    bool CzyWypozyczona(){ return Wypozyczona; }
    bool CzyZarezerwowana(){ return Zarezerwowana; }
    void StanRezerwacji(){
        if(Zarezerwowana)cout << "zarezerwowana\n";
        else cout << "niezarezerwowana\n";
    }
    virtual void WpiszDane(){
        cout << "Podaj pozycje: " << flush << endl;
        cin >> pozycja;
        cout << "Podaj nr katalogowy: " << flush<< endl;
        cin >> NrKatalogowy;
        cout << "Podaj nr ISBN: " << flush<< endl;
        cin >> ISBN;
        cout << "Podaj wydawce: " << flush<< endl;
        cin >> Wydawca;
        cout << "Podaj date wydania: " << flush<< endl;
        cin >> DataWydania;
       
    }
    virtual void WyswietlDane(){
        cout<< "Pozycja: "<< pozycja << "\nNr Katalogowy: " << NrKatalogowy << "\nISBN: " << ISBN << "\nWydawca: " << Wydawca << "\nData wydania: " << DataWydania << endl;
        
    }
    virtual void Stan() = 0;
};
#endif
