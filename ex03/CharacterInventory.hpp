#ifndef EX03_INVENTORY_HPP_INCLUDED
#define EX03_INVENTORY_HPP_INCLUDED

#include <cstddef>

#include "AMateria.hpp"
#include "Floor.hpp"

class CharacterInventory {
private:
  AMateria *(*raw)[4];

public:
  CharacterInventory();
  ~CharacterInventory();
  CharacterInventory(const CharacterInventory &copy);
  CharacterInventory &operator=(const CharacterInventory &copy);

  AMateria(*(&getRaw())[4]);
  AMateria(*const (&getRaw() const)[4]);
};

#endif
