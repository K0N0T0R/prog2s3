#include <iostream>
#include <vector>
#include "buchung.h"
void buchung :: ausgabe(){
    cout << this->Betrag;
    cout << endl;
    cout << this->buchungsnummer;
    cout << endl;
    cout << this->datum;
    cout << endl;
}
buchung :: buchung(string datum,string zweck,unsigned int nummer,double val){
    nummer = this->buchungsnummer;
    val = this->Betrag;

}
void buchung :: setnummer(const unsigned int NewN){
    this->buchungsnummer=NewN;
    return;
}
void buchung :: setBetrag(const double newB){
    this->Betrag = newB;
    return;
}
//void buchung :: setDatum();
unsigned int buchung :: getbuchungsnummer()const{
    return this->buchungsnummer;
}

double buchung :: getBetrag()const{
    return this->Betrag;
}