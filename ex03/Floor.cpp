#include "Floor.hpp"

Floor::Floor() : head(nullptr) {}
Floor::~Floor() { this->disposeAll(); }
Floor::Floor(const Floor &copy) : head(nullptr) { (void)copy; }
Floor &Floor::operator=(const Floor &copy) {
  (void)copy;
  return *this;
}

void Floor::dispose(AMateria *materia) {
  Floor::LLN *const newNode = new Floor::LLN;
  newNode->next = this->head;
  newNode->value = materia;
  this->head = newNode;
}
void Floor::disposeAll() {
  Floor::LLN *node_to_remove;
  while (this->head) {
    node_to_remove = this->head;
    this->head = this->head->next;
    delete node_to_remove->value;
    delete node_to_remove;
  }
}
