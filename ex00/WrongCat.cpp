#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << "WrongCat constructed" << std::endl;
}
WrongCat::~WrongCat() { std::cout << "WrongCat destructed" << std::endl; }
WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy.type) {
  std::cout << "WrongCat copy constructed" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &copy) {
  this->type = copy.type;
  return *this;
}

void WrongCat::makeSound() const { std::cout << "meow~" << std::endl; }
