#include "magicitem.h"

MagicItem::MagicItem(string name, unsigned int value, string newDescription, unsigned int newManaRequired) : Item(name = "magicitem", value = 0)
{
    description = newDescription;
    manaRequired = newManaRequired;
}

MagicItem::~MagicItem() {
    
}

void MagicItem::setDescription(string newDescription) {
    description = newDescription;
}

void MagicItem::setManaRequired(unsigned int newManaRequired) {
    manaRequired = newManaRequired;
}

string MagicItem::getDescription() {
    return description;
}

unsigned int MagicItem::getManaRequired() {
    return manaRequired;
}

string MagicItem::toString() {
    stringstream ss;
    ss << Item::toString() << description << ", requires " << manaRequired << " mana\n";
    return ss.str();
}
