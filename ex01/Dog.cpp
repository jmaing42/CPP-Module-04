#include "Dog.hpp"
#include "Brain.hpp"

#include <iostream>

Dog::Dog() : Animal("dog"), brain(new Brain) {
  std::cout << "Dog constructed" << std::endl;
}
Dog::~Dog() {
  delete this->brain;
  std::cout << "Dog destructed" << std::endl;
}
Dog::Dog(const Dog &copy) : Animal(copy.type), brain(new Brain(*copy.brain)) {
  std::cout << "Dog copy constructed" << std::endl;
}
Dog &Dog::operator=(const Dog &copy) {
  Brain tmp = *copy.brain;
  delete this->brain;
  this->type = copy.type;
  this->brain = new Brain(tmp);
  return *this;
}

void Dog::makeSound() const { std::cout << "bark!" << std::endl; }
