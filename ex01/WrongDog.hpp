#ifndef EX00_WRONG_DOG_HPP_INCLUDED
#define EX00_WRONG_DOG_HPP_INCLUDED

#include <string>

#include "Brain.hpp"
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
private:
  Brain *brain;

public:
  WrongDog();
  ~WrongDog();
  WrongDog(const WrongDog &copy);
  WrongDog &operator=(const WrongDog &copy);

  void makeSound() const;
};

#endif
