#include <iostream>
#include <vector>
#include <string>
#include "buchung.h"
#include "auszahlung.h"
auszahlung :: auszahlung (string datum,string zweck,unsigned int nummer,double val,string time)
{
    buchung(datum,zweck,nummer,val);
    this->time = time;
}
auszahlung :: ~auszahlung ()
{
}