#ifndef EX02_CAT_HPP_INCLUDED
#define EX02_CAT_HPP_INCLUDED

#include <string>

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
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
