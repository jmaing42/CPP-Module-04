#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog") { std::cout << "Dog constructed" << std::endl; }
Dog::~Dog() { std::cout << "Dog destructed" << std::endl; }
Dog::Dog(const Dog &copy) : Animal(copy.type) {
  std::cout << "Dog copy constructed" << std::endl;
}
Dog &Dog::operator=(const Dog &copy) {
  this->type = copy.type;
  return *this;
}

void Dog::makeSound() const { std::cout << "bark!" << std::endl; }
