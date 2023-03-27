#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : type(type) {}
AMateria::AMateria(const AMateria &copy) : type(copy.type) {}
AMateria &AMateria::operator=(const AMateria &copy) {
  this->type = copy.type;
  return *this;
}
const std::string &AMateria::getType() const { return this->type; }
