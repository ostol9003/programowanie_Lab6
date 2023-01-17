//
//  Multimedia.cpp
//  Lab  6_1
//
//  Created by Marcin Ostolski on 12/06/2022.
//
#ifndef Multimedia_cpp
#define Multimedia_cpp
#include <stdio.h>
#include "Pozycja.cpp"

using namespace std;

class Multimedia : public Pozycja{
    int Pojemnosc;
public:
    void UstalPojemnosc(int poj){Pojemnosc=poj;}
};
#endif
