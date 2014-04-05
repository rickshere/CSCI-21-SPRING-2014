/*
 * PROGRAM prizes and box
 * PROGRAM put prize in box
 *
 * PROGRAMMER Rick Arriola
 * Date created: 4/1/14
 * Last date modified: 4/4
 *
 * SOURCES USED : cplusplus.com
 */
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
