#include <iostream>

#include "AMateria.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::~Cure() {}
Cure::Cure(const Cure &copy) : AMateria(copy) {}
Cure &Cure::operator=(const Cure &copy) {
  static_cast<AMateria *>(this)->operator=(copy);
  return *this;
}

AMateria *Cure::clone() const { return new Cure(*this); }
void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "\u2019s wounds *"
            << std::endl;
}
