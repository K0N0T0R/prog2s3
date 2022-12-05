#include <iostream>
#include <vector>
using namespace std;

class buchung{
private:
    unsigned int buchungsnummer;
    double Betrag;

public:
void ausgabe();
    buchung(/* args */);
    ~buchung();
    void setnummer();
    void setBetrag();
    void setDatum();
    unsigned int getbuchungsnummer();
    double getBetrag();

};

class girokonto{
private:
    unsigned int kontonummer;
    vektor<*buchung> buchungen;
    unsigned int setnummer(unsigned int in);
    void storno();
    void saldo();
    void ausgabeBuchungen(); 
public:
    girokonto(/* args */);
    ~girokonto();
};

girokonto::girokonto(/* args */)
{
}

girokonto::~girokonto()
{
}

buchung::buchung(/* args */)
{
}

buchung::~buchung()
{
}
