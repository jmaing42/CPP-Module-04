#include "Character.hpp"

Character::Character(std::string name)
    : name(name), inventory(CharacterInventory()) {}
Character::~Character() {}
Character::Character(const Character &copy)
    : name(copy.name), inventory(copy.inventory) {}
Character &Character::operator=(const Character &copy) {
  this->name = copy.name;
  this->inventory = copy.inventory;
  return *this;
}

// TODO:
