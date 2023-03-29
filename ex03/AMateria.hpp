#ifndef EX03_A_MATERIA_HPP_INCLUDED
#define EX03_A_MATERIA_HPP_INCLUDED

#include <string>

class AMateria;

#include "ICharacter.hpp"

class AMateria {
private:
  std::string type;

public:
  AMateria(const std::string &type);
  virtual ~AMateria(){};
  AMateria(const AMateria &copy);
  AMateria &operator=(const AMateria &copy);
  const std::string &getType() const; // Returns the materia type
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target) = 0;
};

#endif
