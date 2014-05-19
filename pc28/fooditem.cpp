    #include "fooditem.h"
    
    FoodItem::FoodItem(string name, unsigned int value, unsigned int newCalories, string newUnitOfMeasure, float newUnits) : Item( name = "fooditem", value = 0)
    {
        calories = newCalories;
        unitOfMeasure = newUnitOfMeasure;
        units = newUnits;
    }
    FoodItem::~FoodItem() {
        
    }
        
    void FoodItem::setCalories(unsigned int newCalories) {
        calories = newCalories;
    }
    void FoodItem::setUnitOfMeasure(string newUnitOfMeasure) {
        unitOfMeasure = newUnitOfMeasure;
    }
    void FoodItem::setUnits(float newUnits) {
        units = newUnits;
    }
    unsigned int FoodItem::getCalories() {
        return calories;
    }
    string FoodItem::getUnitOfMeasure() {
        return unitOfMeasure;
    }
    float FoodItem::getUnits() {
        return units;
    }
    string FoodItem::toString() {
        stringstream ss;
        ss >> fixed;
        ss.precision(2);
        ss << Item::toString() << units << " " << unitOfMeasure << ", " << calories << " calories" << endl;
        return ss.str();
    }