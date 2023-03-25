#include "AAnimal.hpp"

#include <iostream>

AAnimal::AAnimal() : type("") {
  std::cout << "AAnimal with type " << this->type << " constructed"
            << std::endl;
}
AAnimal::AAnimal(std::string type) : type(type) {
  std::cout << "AAnimal with type " << this->type << " constructed"
            << std::endl;
}
AAnimal::~AAnimal() {
  std::cout << "AAnimal with type " << this->type << " destructed" << std::endl;
}
AAnimal::AAnimal(const AAnimal &copy) : type(copy.type) {
  std::cout << "AAnimal with type " << this->type << " copy constructed"
            << std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal &copy) {
  this->type = copy.type;
  return *this;
}

const std::string &AAnimal::getType() const { return this->type; }
