#include "Cat.hpp"
#include "Brain.hpp"

#include <iostream>

Cat::Cat() : AAnimal("cat"), brain(new Brain) {
  std::cout << "Cat constructed" << std::endl;
}
Cat::~Cat() {
  delete this->brain;
  std::cout << "Cat destructed" << std::endl;
}
Cat::Cat(const Cat &copy) : AAnimal(copy.type), brain(new Brain(*copy.brain)) {
  std::cout << "Cat copy constructed" << std::endl;
}
Cat &Cat::operator=(const Cat &copy) {
  Brain tmp = *copy.brain;
  delete this->brain;
  this->type = copy.type;
  this->brain = new Brain(tmp);
  return *this;
}
Brain &Cat::getBrain() { return *this->brain; }

void Cat::makeSound() const { std::cout << "meow~" << std::endl; }
