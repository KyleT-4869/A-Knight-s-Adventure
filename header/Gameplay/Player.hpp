#pragma once

class Player {
    private:
        int health = 10;
        int mana = 0;
        int magic = 0;
        int damage = 100;
    
    public:
        Player();
        void increaseDamage();
        void increaseHealth();
        void increaseMagic();
        void increaseMana();
        void resetToBase();
};