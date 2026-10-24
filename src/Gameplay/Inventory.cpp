#include "../../header/Gameplay/Inventory.hpp"

Item::Item() {
    this->type = NONE;
    this->count = 0;
    this->location = -1;
}

void Item::increaseCount() {
    this->count++;
}

void Item::decreaseCount() {
    this->count--;
}

void Item::setCount(int count) {
    this->count = count;
}

void Item::setItemType(ItemType type) {
    this->type = type;
}

void Item::setLocation(int location) {
    this->location = location;
}

ItemType Item::getItemType() {
    return this->type;
}

int Item::getCount() {
    return this->count;
}

int Item::getLocation() {
    return this->location;
}

Inventory::Inventory() {}

void Inventory::addItem(Item &item) {
    this->items[this->i].setItemType(item.getItemType());
    this->items[this->i].setCount(item.getCount());
    this->items[this->i].setLocation(this->i);
}

void Inventory::removeItem(int location) {
    this->items[location].setItemType(NONE);
    this->items[location].setCount(0);
    this->items[location].setLocation(-1);
}