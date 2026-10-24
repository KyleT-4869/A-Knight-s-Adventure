#pragma once

enum ItemType {
    HEALTH_POTION,
    MANA_POTION,
    DAMAGE_POTION,
    MAGIC_POTION,
    NONE
};

class Item {
    private:
        ItemType type;
        int count;
        int location;
    
    public:
        Item();
        void increaseCount();
        void decreaseCount();
        void setCount(int count);
        void setItemType(ItemType type);
        void setLocation(int location);
        ItemType getItemType();
        int getCount();
        int getLocation();
};

class Inventory {
    private:
        Item items[20];
        int i = 0;
        bool full = false;
    
    public:
        Inventory();
        void addItem(Item &item);
        void removeItem(int location);
        void expandLimit();
        void orderByValue();
        void orderByName();
};