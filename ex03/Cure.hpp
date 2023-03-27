#ifndef EX03_CURE_HPP_INCLUDED
#define EX03_CURE_HPP_INCLUDED

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
public:
  Cure();
  ~Cure();
  Cure(const Cure &copy);
  Cure &operator=(const Cure &copy);

  virtual AMateria *clone() const;
  virtual void use(ICharacter &target);
};

#endif
