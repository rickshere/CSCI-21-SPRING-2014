#pragma once

#include <string>
#include <iostream>
using namespace std;

class Prize {
  public:
    //constructor
    Prize();
    //overloaded constructor
    Prize(string newPrizeName, unsigned int newPrizeValue);
    //destructor
    ~Prize();
    friend bool operator ==(Prize prize1, Prize prize2);
    //mutators and accessors for two member variables
    string getPrizeName();
    unsigned int getPrizeValue();
    void setPrizeName(string newPrizeName);
    void setPrizeValue(unsigned int newPrizeValue);
    
  
  private:
    //member variables
    string prizeName;
    unsigned int prizeValue;
};
