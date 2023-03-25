#ifndef EX00_WRONG_CAT_HPP_INCLUDED
#define EX00_WRONG_CAT_HPP_INCLUDED

#include <string>

#include "Brain.hpp"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:
  Brain *brain;

public:
  WrongCat();
  ~WrongCat();
  WrongCat(const WrongCat &copy);
  WrongCat &operator=(const WrongCat &copy);

  void makeSound() const;
};

#endif
