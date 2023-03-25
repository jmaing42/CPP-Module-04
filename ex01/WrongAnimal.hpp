#ifndef EX00_WRONG_ANIIMAL_HPP_INCLUDED
#define EX00_WRONG_ANIIMAL_HPP_INCLUDED

#include <string>

class WrongAnimal {
protected:
  std::string type;
  WrongAnimal(std::string type);

public:
  WrongAnimal();
  ~WrongAnimal();
  WrongAnimal(const WrongAnimal &copy);
  WrongAnimal &operator=(const WrongAnimal &copy);

  const std::string &getType() const;
  void makeSound() const;
};

#endif
