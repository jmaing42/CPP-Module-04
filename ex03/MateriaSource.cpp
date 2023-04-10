#include <cstddef>
#include <string>

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}
MateriaSource::~MateriaSource() {
  for (size_t i = 0; i < 4; i++)
    delete this->inventory.getRaw()[i];
}
MateriaSource::MateriaSource(const MateriaSource &copy) {
  this->operator=(copy);
}
MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
  for (size_t i = 0; i < 4; i++) {
    delete this->inventory.getRaw()[i];
    this->inventory.getRaw()[i] = NULL;
    if (copy.inventory.getRaw()[i])
      this->inventory.getRaw()[i] = copy.inventory.getRaw()[i]->clone();
  }
  return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
  for (size_t i = 0; i < 4; i++) {
    if (!this->inventory.getRaw()[i]) {
      this->inventory.getRaw()[i] = materia;
      return;
    }
  }
  delete materia;
}
AMateria *MateriaSource::createMateria(std::string const &type) {
  for (size_t i = 0; i < 4; i++)
    if (this->inventory.getRaw()[i] &&
        this->inventory.getRaw()[i]->getType() == type)
      return this->inventory.getRaw()[i]->clone();
  return nullptr;
}
