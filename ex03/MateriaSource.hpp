#ifndef EX03_MATERIA_SOURCE_HPP_INCLUDED
#define EX03_MATERIA_SOURCE_HPP_INCLUDED

#include <string>

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Inventory.hpp"

class MateriaSource : public IMateriaSource {
private:
  Inventory inventory;

public:
  MateriaSource();
  virtual ~MateriaSource();
  MateriaSource(const MateriaSource &copy);
  MateriaSource &operator=(const MateriaSource &copy);

  virtual void learnMateria(AMateria *materia);
  virtual AMateria *createMateria(std::string const &type);
};

#endif
