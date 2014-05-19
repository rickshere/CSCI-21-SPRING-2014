#pragma once
#include "item.h"

class MagicItem : public Item {
    public:
        MagicItem(string name = "magicitem", unsigned int value = 0, string newDescription = "no description", unsigned int newManaRequired = 0);
        virtual ~MagicItem();
        void setDescription(string newDescription);
        void setManaRequired(unsigned int newManaRequired);
        string getDescription();
        unsigned int getManaRequired();
        string toString();
    private:
        string description;
        unsigned int manaRequired;
};