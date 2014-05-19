    #include "item.h"
    
    Item::Item(string newName, unsigned int newValue) {
        name = newName;
        value = newValue;
    }
    Item::~Item() {
    }
    void Item::setName (string newName) {
        name = newName;
    }
    void Item::setValue (unsigned int newValue) {
        value = newValue;
    }
    string Item::getName() {
        return name;
    }
    int Item::getValue() {
        return value;
    }    
    string Item::toString() {
        stringstream ss;
        ss << getName() <<  ", $" << getValue();
        return ss.str();
    }
