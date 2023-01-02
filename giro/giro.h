#include <iostream>
#include <vector>
#include <string>
#include "buchung.h"
#include "auszahlung.h"
#include "ueberweisung.h"
#ifndef GIRO_H_
#define GIRO_H_
using namespace std;
class girokonto{
private:
    string inhaber;
    unsigned int kontonummer;
    vector<buchung> buchungen;

public:
    //getter/setter
    string getInhaber();
    void setInhaber(string inhaber);
    int getKontonummer();
    //vector manipulation
    void addBuchung();
    void storno();
    void saldo();
    void ausgabeBuchungen();
    //operatoren verbieten
    girokonto(const girokonto& r) = delete;        //copy konstruktor verbieten
    girokonto& operator=(const girokonto& r) = delete;  //zuweisungsoperator verbieten
    //konst/destruktor
    girokonto(/* args */);
    ~girokonto();
};
#endif