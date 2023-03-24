#include "WrongDog.hpp"

#include <iostream>

WrongDog::WrongDog() : WrongAnimal("WrongDog") {
  std::cout << "WrongDog constructed" << std::endl;
}
WrongDog::~WrongDog() { std::cout << "WrongDog destructed" << std::endl; }
WrongDog::WrongDog(const WrongDog &copy) : WrongAnimal(copy.type) {
  std::cout << "WrongDog copy constructed" << std::endl;
}
WrongDog &WrongDog::operator=(const WrongDog &copy) {
  this->type = copy.type;
  return *this;
}

void WrongDog::makeSound() const { std::cout << "bark!" << std::endl; }
