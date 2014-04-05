#include "Prize.h"
#pragma once


#include <string>
#include <iostream>
using namespace std;

class Box: public Prize {
public:
  //constructor - sets array size to capacity size
  Box();
  //overloaded constructor - sets array to size of capacity
  Box(unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapacity);
  //destructor - cleans up array
  ~Box();
  //accessors
  unsigned int getBoxNumber();
  string getBoxColor();
  //mutators
  void setBoxNumber(unsigned int newBoxNumber);
  void setBoxColor(string newBocColor);
  unsigned int getPrizeCapacity();
  Prize* createPrizeArray(unsigned int size);
  unsigned int getPrizeCount();
  //adds prizes to the box
  bool addPrize(Prize prize);
  Prize& getPrize(unsigned int index);
  //removes prize from box
  Prize removePrize(unsigned int index);

private:
  //member variables
  unsigned int boxNumber;
  string boxColor;
  Prize scratch;
  Prize* prizes;
  unsigned int prizeCapacity;
  unsigned int prizeCount;

};
