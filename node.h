#include <iostream>
#include "student.h"

using namespace std;

class Node{
 public:
  Node(Student* student);
  ~Node();
  Student* getStudent();
  void setNext(Node* newNext);
  Node* getNext();
  Student* s;
  Node* next;
};
