//
//  main.cpp
//  Lab  6_1
//
//  Created by Marcin Ostolski on 12/06/2022.
//

#include <iostream>

#include "Ksiazka.cpp"
#include "Czasopismo.cpp"
#include "DVD.cpp"
#include "CD.cpp"
#include "Slownik.cpp"

using namespace std;
typedef unsigned int uint;


int main(int argc, const char * argv[]) {
    
    Ksiazka k1;
    Czasopismo c1;
    Pozycja *p;
    DVD dvd;
    CD cd;
    Slownik s;
    
    p=&k1;
    p->WyswietlDane();
    p->Stan();

    p=&dvd;
    p->WyswietlDane();
    p->Stan();
    
    p=&s;
    p->WpiszDane();
    p->WyswietlDane();
    p->Stan();
    
    p=&cd;
    p->WyswietlDane();
    p->Wypozycz();
    p->Zarezerwuj();
    p->Stan();
    return 0;
}
