#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal("cat") { std::cout << "Cat constructed" << std::endl; }
Cat::~Cat() { std::cout << "Cat destructed" << std::endl; }
Cat::Cat(const Cat &copy) : Animal(copy.type) {
  std::cout << "Cat copy constructed" << std::endl;
}
Cat &Cat::operator=(const Cat &copy) {
  this->type = copy.type;
  return *this;
}

void Cat::makeSound() const { std::cout << "meow~" << std::endl; }
