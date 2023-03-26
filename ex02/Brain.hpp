#ifndef EX02_BRAIN_HPP_INCLUDED
#define EX02_BRAIN_HPP_INCLUDED

#include <string>

class Brain {
public:
  std::string ideas[100];

  Brain();
  ~Brain();
  Brain(const Brain &copy);
  Brain &operator=(const Brain &copy);
};

#endif
