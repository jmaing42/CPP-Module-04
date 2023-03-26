#ifndef EX02_A_ANIMAL_HPP_INCLUDED
#define EX02_A_ANIMAL_HPP_INCLUDED

#include <string>

class AAnimal {
protected:
  std::string type;
  AAnimal(std::string type);

public:
  AAnimal();
  virtual ~AAnimal();
  AAnimal(const AAnimal &copy);
  AAnimal &operator=(const AAnimal &copy);

  const std::string &getType() const;
  virtual void makeSound() const = 0;
};

#endif
