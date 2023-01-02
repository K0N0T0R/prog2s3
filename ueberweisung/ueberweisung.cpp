#include <iostream>
#include <vector>
#include "buchung.h"
#include "ueberweisung.h"
void ueberweisung :: ausgabe(){
    ausgabe();
    cout << this->kontonummer;
    cout << endl;
}
ueberweisung::ueberweisung(string datum,string zweck,unsigned int nummer,double val,int knummer)
{
    buchung(datum,zweck,nummer,val);
    this->kontonummer=knummer;
}

ueberweisung::~ueberweisung()
{
}