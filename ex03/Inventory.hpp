#ifndef EX03_INVENTORY_HPP_INCLUDED
#define EX03_INVENTORY_HPP_INCLUDED

#include <cstddef>

#include "AMateria.hpp"

class Inventory {
private:
  AMateria *(*raw)[4];

public:
  Inventory();
  ~Inventory();
  Inventory(const Inventory &copy);
  Inventory &operator=(const Inventory &copy);

  AMateria(*(&getRaw())[4]);
  AMateria(*const (&getRaw() const)[4]);
};

#endif
