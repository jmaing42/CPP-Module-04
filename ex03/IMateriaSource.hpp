#ifndef EX03_I_MATERIA_SOURCE_HPP_INCLUDED
#define EX03_I_MATERIA_SOURCE_HPP_INCLUDED

#include <string>

#include "AMateria.hpp"

class IMateriaSource {
public:
  virtual ~IMateriaSource() = 0;
  virtual void learnMateria(AMateria *) = 0;
  virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif
