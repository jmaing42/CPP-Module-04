#ifndef EX03_CHARACTER_HPP_INCLUDED
#define EX03_CHARACTER_HPP_INCLUDED

#include <string>

#include "AMateria.hpp"
#include "CharacterInventory.hpp"
#include "ICharacter.hpp"

class Character : ICharacter {
private:
  std::string name;
  CharacterInventory inventory;

public:
  Character(std::string name = "<name>");
  virtual ~Character();
  Character(const Character &copy);
  Character &operator=(const Character &copy);
  const std::string &getName() const;
  void equip(AMateria *m);
  void unequip(int idx);
  void use(int idx, ICharacter &target);
};

#endif
