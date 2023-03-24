#ifndef EX00_DOG_HPP_INCLUDED
#define EX00_DOG_HPP_INCLUDED

#include <string>

#include "Animal.hpp"

class Dog : public Animal {
public:
  Dog();
  ~Dog();
  Dog(const Dog &copy);
  Dog &operator=(const Dog &copy);

  void makeSound() const;
};

#endif
