#pragma once
#include "item.h"

class FoodItem : public Item {
    public:
        FoodItem(string name = "fooditem", unsigned int value = 0, unsigned int newCalories = 0, string newUnitOfMeasure = "nounits", float newUnits = 0.00);
        virtual ~FoodItem();
        void setCalories(unsigned int newCalories);
        void setUnitOfMeasure(string newUnitOfMeasure);
        void setUnits(float newUnits);
        unsigned int getCalories();
        string getUnitOfMeasure();
        float getUnits();
        string toString();
    private:
        unsigned int calories;
        string unitOfMeasure;
        float units; 
};