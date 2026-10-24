#pragma once
#include "Inventory.hpp"

class Player {
    private:
        int health = 10;
        int mana = 0;
        int magic = 0;
        int damage = 100;
        Inventory inventory;
    
    public:
        Player();
        int getHealth();
        int getMana();
        int getMagic();
        int getDamage();
        Inventory getInventory();
        void increaseDamage(int amount);
        void increaseHealth(int amount);
        void increaseMagic(int amount);
        void increaseMana(int amount);
        void resetToBase();
};