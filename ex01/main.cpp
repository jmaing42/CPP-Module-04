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
    Dog *const tmp = &i;

    j.getBrain().ideas[42] = "Hello world!";
    i = j;
    i.getBrain().ideas[42] = "Bye world!";
    std::cout << j.getBrain().ideas[42] << std::endl;
    std::cout << i.getBrain().ideas[42] << std::endl;
    i = *tmp;
  }
  {
    Animal **animals = new Animal *[84];
    for (size_t i = 0; i < 42; i++) {
      animals[i] = new Dog();
      animals[42 + i] = new Cat();
    }
    for (size_t i = 0; i < 84; i++)
      delete animals[i];

    delete[] animals;
  }
}
