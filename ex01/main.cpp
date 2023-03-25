#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  {
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    delete i;
    delete j;
  }
  {
    Dog i = Dog();
    Dog j = Dog();
    Dog *tmp = &i;
    i = j;
    i = *tmp;
  }
}
