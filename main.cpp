// File: main.cpp
// Created Date: May 03, 2013 
// Programmer: Ka-Son Chan
// Description: This main.cpp is a program to test the Doubly Linked List (DLL)
// functionalities.

#include "DLL.h"

#include <iostream>
#include <string>
using namespace std;

int main() {
  // Declare Doubly Linked List
  DLL DLL;

  cout << boolalpha << "IsEmpty? " << DLL.IsEmpty() << endl;
  DLL.PrintFromHead();
  DLL.PrintFromTail();
  cout << endl;

  DLL.InsertToTail("10");
  DLL.PrintFromHead();
  DLL.PrintFromTail();
  cout << endl;

  DLL.InsertToTail("5");
  DLL.PrintFromHead();
  DLL.PrintFromTail();
  cout << endl;

  DLL.InsertToHead("15");
  DLL.PrintFromHead();
  DLL.PrintFromTail();
  cout << endl;

  DLL.InsertToHead("20");
  cout << boolalpha << "IsEmpty? " << DLL.IsEmpty() << endl;
  DLL.PrintFromHead();
  DLL.PrintFromTail();
  cout << endl;

  cout << boolalpha << "1 IsFound? " << DLL.IsFound("1") << endl;
  cout << boolalpha << "20 IsFound? " << DLL.IsFound("20") << endl;
  cout << boolalpha << "15 IsFound? " << DLL.IsFound("15") << endl;
  cout << boolalpha << "1000 IsFound? " << DLL.IsFound("1000") << endl;

  return 0;
}