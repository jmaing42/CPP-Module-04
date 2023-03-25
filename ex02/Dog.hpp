#ifndef EX00_DOG_HPP_INCLUDED
#define EX00_DOG_HPP_INCLUDED

#include <string>

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
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
