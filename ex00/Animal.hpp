#ifndef EX00_ANIMAL_HPP_INCLUDED
#define EX00_ANIMAL_HPP_INCLUDED

#include <string>

class Animal {
protected:
  std::string type;
  Animal(std::string type);

public:
  Animal();
  virtual ~Animal();
  Animal(const Animal &copy);
  Animal &operator=(const Animal &copy);

  const std::string &getType() const;
  virtual void makeSound() const;
};

#endif
