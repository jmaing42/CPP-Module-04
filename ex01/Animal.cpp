#include "Animal.hpp"

#include <iostream>

Animal::Animal() : type("") {
  std::cout << "Animal with type " << this->type << " constructed" << std::endl;
}
Animal::Animal(std::string type) : type(type) {
  std::cout << "Animal with type " << this->type << " constructed" << std::endl;
}
Animal::~Animal() {
  std::cout << "Animal with type " << this->type << " destructed" << std::endl;
}
Animal::Animal(const Animal &copy) : type(copy.type) {
  std::cout << "Animal with type " << this->type << " copy constructed"
            << std::endl;
}
Animal &Animal::operator=(const Animal &copy) {
  this->type = copy.type;
  return *this;
}

const std::string &Animal::getType() const { return this->type; }
void Animal::makeSound() const {
  std::cout << "Animal::makeSound() should not be called" << std::endl;
}
