#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

int main(){
  Student* s = new Student();
  Student* s2 = new Student();
  Node* one = new Node(s);
  Node* two = new Node(s2);
  one->setNext(two);
  one->getNext();
  one->getStudent();
  one->~Node();
  two->~Node();
  return 0;
}

