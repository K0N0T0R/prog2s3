#include <iostream>
#include <vector>
#include <string>
#include "buchung.h"
#ifndef UEBERWEISUNG_H_
#define UEBERWEISUNG_H_
using namespace std;
class ueberweisung :public buchung
{
private:
    int kontonummer;

public:
    void ausgabe()override;
    int getKontonummer()
    {
        return this->kontonummer;
    }

    void setKontonummer(int kontonummer)
    {
        this->kontonummer = kontonummer;
    }

    ueberweisung(string datum,string zweck,unsigned int nummer,double val,int knummer);
    ~ueberweisung();
};
#endif