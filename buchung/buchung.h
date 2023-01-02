#include <iostream>
#include <vector>
#include <string>
#ifndef BUCHUNG_H_
#define BUCHUNG_H_
using namespace std;
class buchung{
private:
    //empty

protected:
    unsigned int buchungsnummer;
    double Betrag;
    string datum,zweck; 

public:
    virtual void ausgabe();
    buchung(const buchung& r) = delete;        //copy konstruktor verbieten
    buchung& operator=(const buchung& r) = delete;  //zuweisungsoperator verbieten
    buchung(string datum,string zweck,unsigned int nummer,double val);
    ~buchung();
    void setnummer(const unsigned int NewN);
    void setBetrag(const double newB);
    void setDatum();
    unsigned int getbuchungsnummer()const;
    double getBetrag()const;
};
#endif