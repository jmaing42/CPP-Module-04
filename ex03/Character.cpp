#include "Character.hpp"

Character::Character(std::string name) : name(name) {}
Character::~Character() {}
Character::Character(const Character &copy) : name(copy.name) {}
Character &Character::operator=(const Character &copy) {
  this->name = copy.name;
  this->inventory = copy.inventory;
  return *this;
}

const std::string &Character::getName() const { return this->name; }
void Character::equip(AMateria *m) {
  AMateria **const raw = this->inventory.getRaw();
  for (size_t i = 0; i < 4; i++) {
    if (!raw[i]) {
      raw[i] = m;
      return;
    }
  }
}
void Character::unequip(int idx) { this->inventory.getRaw()[idx] = nullptr; }
void Character::use(int idx, ICharacter &target) {
  if (this->inventory.getRaw()[idx])
    this->inventory.getRaw()[idx]->use(target);
}
