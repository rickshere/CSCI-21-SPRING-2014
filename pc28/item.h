#pragma once
#include <string>
#include <sstream> 
#include <iomanip> 
#include <iostream>

using namespace std;

class Item {
    public:
        Item(string newName = "item", unsigned int newValue = 0);
        virtual ~Item();
        
        void setName (string newName);
        void setValue (unsigned int newValue);
        
        string getName();
        int getValue();
        
        string toString();
    private:
        string name;
        unsigned int value;
};