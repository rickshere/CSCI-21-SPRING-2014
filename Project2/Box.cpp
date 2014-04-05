#include "Box.h"

//member definitions of Box.h

Box::Box() {
  boxNumber = 0;
  boxColor = "NO COLOR";
  prizeCapacity = 5;
  prizeCount = 0;
  prizes = createPrizeArray(prizeCapacity);
}

Box::Box(unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapacity) {
  boxNumber = newBoxNumber;
  boxColor = newBoxColor;
  prizeCapacity = newPrizeCapacity;
  prizes = createPrizeArray(prizeCapacity);  
}

Box::~Box() {
    delete [] prizes;
    prizes = NULL;
}

Prize* Box::createPrizeArray(unsigned int size){
    Prize* array = new Prize[size];
    
    return array;
}

unsigned int Box::getBoxNumber() {
    return boxNumber;
}
string Box::getBoxColor() {
    return boxColor;
}
void Box::setBoxNumber(unsigned int newBoxNumber) {
    boxNumber = newBoxNumber;
}
void Box::setBoxColor(string newBoxColor) {
    boxColor = newBoxColor;
}
unsigned int Box::getPrizeCapacity() {
    return prizeCapacity;
}
unsigned int Box::getPrizeCount() {
    return prizeCount;
}

bool Box::addPrize(Prize prize) {
    if (prizeCount < prizeCapacity) {
        prizes[prizeCount + 1] = prize;
        return true;
    } else
        return false;
}

Prize& Box::getPrize(unsigned int index) {
     if (index < prizeCapacity) {
        return prizes[index];
     } else
        return scratch; 
}

Prize Box::removePrize (unsigned int index) {
    if (index < prizeCount) {
         Prize prizeHolder = prizes[index];
        // for (unsigned int i = index; i < prizeCount; i++) 
        //   if (index < prizeCount - 1) 
        //     prizes[i] = prizes[i + 1];
        // prizeCount -= 1;
        return prizeHolder;
    } else
        return scratch;
}






