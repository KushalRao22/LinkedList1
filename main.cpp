/*
This is a class that proves my node.cpp and node.h files work

By: Kushal Rao

Last Modified: 1/11/22
*/

//Imports
#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

int main(){//Just walk through pre-defined commands to prove that it works
  Student* s = new Student();
  Student* s2 = new Student();
  Node* one = new Node(s);
  Node* two = new Node(s2);
  one->setNext(two);
  one->getNext();
  one->getStudent();
  one->~Node();
  two->~Node();
  return 0;//End program
}

