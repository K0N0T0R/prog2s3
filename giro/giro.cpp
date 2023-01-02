#include <iostream>
#include <vector>
#include <string>
#include "giro.h"
#include "buchung.h"
#include "auszahlung.h"
#include "ueberweisung.h"

    string girokonto :: getInhaber()
    {
        return this->inhaber;
    }

    void girokonto :: setInhaber(string inhaber)
    {
        this->inhaber = inhaber;
    }

    int girokonto :: getKontonummer()
    {
        return this->kontonummer;
    }
    girokonto::girokonto(/* args */)
    {
    }

    girokonto::~girokonto()
    {
    }   
