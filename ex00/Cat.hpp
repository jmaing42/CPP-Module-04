#ifndef EX00_CAT_HPP_INCLUDED
#define EX00_CAT_HPP_INCLUDED

#include <string>

#include "Animal.hpp"

class Cat : public Animal {
public:
  Cat();
  ~Cat();
  Cat(const Cat &copy);
  Cat &operator=(const Cat &copy);

  void makeSound() const;
};

#endif
