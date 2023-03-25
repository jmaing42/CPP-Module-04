#include "WrongDog.hpp"

#include <iostream>

WrongDog::WrongDog() : WrongAnimal("WrongDog"), brain(new Brain()) {
  std::cout << "WrongDog constructed" << std::endl;
}
WrongDog::~WrongDog() { std::cout << "WrongDog destructed" << std::endl; }
WrongDog::WrongDog(const WrongDog &copy)
    : WrongAnimal(copy.type), brain(new Brain()) {
  std::cout << "WrongDog copy constructed" << std::endl;
}
WrongDog &WrongDog::operator=(const WrongDog &copy) {
  Brain tmp = *copy.brain;
  delete this->brain;
  this->type = copy.type;
  this->brain = new Brain(tmp);
  return *this;
}

void WrongDog::makeSound() const { std::cout << "bark!" << std::endl; }
