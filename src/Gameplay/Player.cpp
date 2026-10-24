#include "../../header/Gameplay/Player.hpp"

Player::Player() {}

int Player::getHealth() {
    return this->health;
}

int Player::getMana() {
    return this->mana;
}

int Player::getMagic() {
    return this->magic;
}

int Player::getDamage() {
    return this->damage;
}

Inventory Player::getInventory() {
    return this->inventory;
}

void Player::increaseDamage(int amount) {
    this->damage += amount;
}

void Player::increaseHealth(int amount) {
    this->health += amount;
}

void Player::increaseMagic(int amount) {
    this->magic += amount;
}

void Player::increaseMana(int amount) {
    this->mana += amount;
}

void Player::resetToBase() {
    this->health = 10;
    this->mana = 0;
    this->magic = 0;
    this->damage = 100;
}