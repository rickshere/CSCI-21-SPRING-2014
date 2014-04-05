#include "Prize.h"

//member definitions of Prize.h

Prize::Prize() {
  prizeName = "NO NAME";
  prizeValue = 0;
}

Prize::Prize(string newPrizeName, unsigned int newPrizeValue) {
  prizeName = newPrizeName;
  prizeValue = newPrizeValue;
}

Prize::~Prize() {
    
}

string Prize::getPrizeName() {
    return prizeName;    
}

unsigned int Prize::getPrizeValue() {
    return prizeValue;
}

void Prize::setPrizeName(string newPrizeName) {
    prizeName = newPrizeName;
}

void Prize::setPrizeValue(unsigned int newPrizeValue) {
    prizeValue = newPrizeValue;
}

bool operator ==(Prize prize1, Prize prize2)
{
    if (prize1.prizeName==prize2.prizeName && prize1.prizeValue == prize2.prizeValue)
        return true;
    else
        return false;
}