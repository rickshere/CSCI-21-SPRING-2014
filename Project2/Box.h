#include "Prize.h"
#pragma once


#include <string>
#include <iostream>
using namespace std;

class Box: public Prize {
public:
  Box();
  Box(unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapacity);
  ~Box();
  
  unsigned int getBoxNumber();
  string getBoxColor();
  void setBoxNumber(unsigned int newBoxNumber);
  void setBoxColor(string newBocColor);
  unsigned int getPrizeCapacity();
  Prize* createPrizeArray(unsigned int size);
  unsigned int getPrizeCount();
  bool addPrize(Prize prize);
  Prize& getPrize(unsigned int index);
  Prize removePrize(unsigned int index);

private:
  unsigned int boxNumber;
  string boxColor;
  Prize scratch;
  Prize* prizes;
  unsigned int prizeCapacity;
  unsigned int prizeCount;

};
