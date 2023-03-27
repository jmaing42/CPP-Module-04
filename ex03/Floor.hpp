#ifndef EX03_FLOOR_HPP_INCLUDED
#define EX03_FLOOR_HPP_INCLUDED

#include "AMateria.hpp"

class Floor {
private:
  struct LLN {
  public:
    LLN *next;
    AMateria *value;
  };
  LLN *head;

public:
  Floor();
  ~Floor();
  Floor(const Floor &copy);
  Floor &operator=(const Floor &copy);

  void dispose(AMateria *materia);
  void disposeAll();
};

#endif
