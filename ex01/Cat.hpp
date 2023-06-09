#ifndef EX01_CAT_HPP_INCLUDED
#define EX01_CAT_HPP_INCLUDED

#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
  Brain *brain;

public:
  Cat();
  ~Cat();
  Cat(const Cat &copy);
  Cat &operator=(const Cat &copy);

  Brain &getBrain();
  virtual void makeSound() const;
};

#endif
