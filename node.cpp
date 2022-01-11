#include <iostream>
#include "student.h"
#include "node.h"

using namespace std;

Node::Node(Student* student){
  s = student;
  next = NULL;
}

Node::~Node(){
  delete s;
  next = NULL;
}

Student* Node::getStudent(){
  return s;
}

void Node::setNext(Node* newNext){
  next = newNext;
}

Node* Node::getNext(){
  return next;
}
