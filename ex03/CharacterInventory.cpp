#include <cstring>

#include "AMateria.hpp"
#include "CharacterInventory.hpp"

CharacterInventory::CharacterInventory() : raw(new AMateria *[1][4]) {}
CharacterInventory::~CharacterInventory() { delete[] this->raw; }
CharacterInventory::CharacterInventory(const CharacterInventory &copy)
    : raw(new AMateria *[1][4]) {
  this->operator=(copy);
}
CharacterInventory &
CharacterInventory::operator=(const CharacterInventory &copy) {
  for (size_t i = 0; i < 4; i++)
    (*this->raw)[i] = (*copy.raw)[i];
  return *this;
}

AMateria(*(&CharacterInventory::getRaw())[4]) { return *this->raw; }
AMateria(*const (&CharacterInventory::getRaw() const)[4]) { return *this->raw; }
