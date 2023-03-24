#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() : type("") {
  std::cout << "WrongAnimal with type " << this->type << " constructed"
            << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : type(type) {
  std::cout << "WrongAnimal with type " << this->type << " constructed"
            << std::endl;
}
WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal with type " << this->type << " destructed"
            << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type) {
  std::cout << "WrongAnimal with type " << this->type << " copy constructed"
            << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
  this->type = copy.type;
  return *this;
}

const std::string &WrongAnimal::getType() const { return this->type; }
void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal::makeSound() should not be called" << std::endl;
}
