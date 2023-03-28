#include <cstring>

#include "AMateria.hpp"
#include "CharacterInventory.hpp"

CharacterInventory::CharacterInventory() : raw(new AMateria *[1][4]) {}
CharacterInventory::~CharacterInventory() {
  for (size_t i = 0; i < 4; i++)
    delete (*this->raw)[i];
  delete[] this->raw;
}
CharacterInventory::CharacterInventory(const CharacterInventory &copy)
    : raw(new AMateria *[1][4]) {
  try {
    for (size_t i = 0; i < 4; i++)
      if ((*copy.raw)[i])
        (*this->raw)[i] = (*copy.raw)[i]->clone();
  } catch (const std::exception &e) {
    for (size_t i = 0; i < 4; i++)
      delete (*copy.raw)[i];
    delete[] this->raw;
    throw e;
  }
}
CharacterInventory &
CharacterInventory::operator=(const CharacterInventory &copy) {
  CharacterInventory tmp = copy;
  for (size_t i = 0; i < 4; i++)
    delete (*this->raw)[i];
  std::memcpy(this->raw, tmp.raw, sizeof(*this->raw));
  std::memset(tmp.raw, 0, sizeof(*tmp.raw));
  return *this;
}

const AMateria(*const (&CharacterInventory::getRaw())[4]) { return *this->raw; }
