#ifndef EX01_DOG_HPP_INCLUDED
#define EX01_DOG_HPP_INCLUDED

#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
  Brain *brain;

public:
  Dog();
  ~Dog();
  Dog(const Dog &copy);
  Dog &operator=(const Dog &copy);

  Brain &getBrain();
  virtual void makeSound() const;
};

#endif
