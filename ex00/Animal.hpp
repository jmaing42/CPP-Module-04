#ifndef EX00_ANIIMAL_HPP_INCLUDED
#define EX00_ANIIMAL_HPP_INCLUDED

#include <string>

class Animal {
protected:
  std::string type;
  Animal(std::string type);

public:
  Animal();
  ~Animal();
  Animal(const Animal &copy);
  Animal &operator=(const Animal &copy);

  const std::string &getType() const;
  void makeSound() const;
};

#endif
