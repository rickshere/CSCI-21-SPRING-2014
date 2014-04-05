#pragma once

#include <string>
#include <iostream>
using namespace std;

class Prize {
  public:
    Prize();
    Prize(string newPrizeName, unsigned int newPrizeValue);
    ~Prize();
    friend bool operator ==(Prize prize1, Prize prize2);
    string getPrizeName();
    unsigned int getPrizeValue();
    void setPrizeName(string newPrizeName);
    void setPrizeValue(unsigned int newPrizeValue);
    
  
  private:
    string prizeName;
    unsigned int prizeValue;
};
