#include <cstring>

#include "AMateria.hpp"
#include "Inventory.hpp"

Inventory::Inventory() : raw(new AMateria *[1][4]) {
  for (size_t i = 0; i < 4; i++)
    this->getRaw()[i] = nullptr;
}
Inventory::~Inventory() { delete[] this->raw; }
Inventory::Inventory(const Inventory &copy) : raw(new AMateria *[1][4]) {
  this->operator=(copy);
}
Inventory &Inventory::operator=(const Inventory &copy) {
  for (size_t i = 0; i < 4; i++)
    (*this->raw)[i] = (*copy.raw)[i];
  return *this;
}

AMateria(*(&Inventory::getRaw())[4]) { return *this->raw; }
AMateria(*const (&Inventory::getRaw() const)[4]) { return *this->raw; }
