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

  void put(AMateria *materia, Floor &floor);
  void dispose(size_t index, Floor &floor);
  const AMateria(*const (&getRaw())[4]);
};

#endif
