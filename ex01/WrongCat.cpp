#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat"), brain(new Brain()) {
  std::cout << "WrongCat constructed" << std::endl;
}
WrongCat::~WrongCat() { std::cout << "WrongCat destructed" << std::endl; }
WrongCat::WrongCat(const WrongCat &copy)
    : WrongAnimal(copy.type), brain(new Brain(*copy.brain)) {
  std::cout << "WrongCat copy constructed" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &copy) {
  Brain tmp = *copy.brain;
  delete this->brain;
  this->type = copy.type;
  this->brain = new Brain(tmp);
  return *this;
}

void WrongCat::makeSound() const { std::cout << "meow~" << std::endl; }
