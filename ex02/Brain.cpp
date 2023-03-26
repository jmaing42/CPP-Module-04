#include "Brain.hpp"

#include <iostream>

Brain::Brain() { std::cout << "Brain constructed" << std::endl; }
Brain::~Brain() { std::cout << "Brain destructed" << std::endl; }
Brain::Brain(const Brain &copy) {
  for (size_t i = 0; i < 100; i++) {
    this->ideas[i] = copy.ideas[i];
  }
  std::cout << "Brain copy constructed" << std::endl;
}
Brain &Brain::operator=(const Brain &copy) {
  for (size_t i = 0; i < 100; i++) {
    this->ideas[i] = copy.ideas[i];
  }
  return *this;
}
