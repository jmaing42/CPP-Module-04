#ifndef EX03_ICE_HPP_INCLUDED
#define EX03_ICE_HPP_INCLUDED

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
public:
  Ice();
  ~Ice();
  Ice(const Ice &copy);
  Ice &operator=(const Ice &copy);

  virtual AMateria *clone() const;
  virtual void use(ICharacter &target);
};

#endif
