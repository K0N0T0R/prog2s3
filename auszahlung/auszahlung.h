#include <iostream>
#include <vector>
#include <string>
#include "buchung.h"
#ifndef AUSZAHLUNG_H_
#define AUSZAHLUNG_H_
using namespace std;
class auszahlung :public buchung
{
private:
    string time;
public:
    auszahlung (string datum,string zweck,unsigned int nummer,double val,string time);
    ~auszahlung();
};
#endif