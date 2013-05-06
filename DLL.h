// File: DLL.h
// Created Date: May 03, 2013 
// Programmer: Ka-Son Chan
// Description: This DLL.h is the Doubly Linked List (DLL) header file which
// contains all the variables, functions and classes declarations. 

#ifndef DLL_H
#define DLL_H

#include <iostream>
#include <string>
using namespace std;

// Double linked list class
class DLL {
private:
  // Node structure
  class node {
    string data;
    node * prev;
    node * next;
    friend class DLL;
  };
  typedef class node Node;
  typedef class node * NodePtr;

  NodePtr head;
  NodePtr tail;

public:
  // DLL Constructor
  DLL();
  // InsertToHead
  // Insert new data to the head of the DLL
  void InsertToHead(string data);
  // InsertToTail
  // Insert new data to the tail of the DLL
  void InsertToTail(string data);
  // IsEmpty
  // Return true if the DLL is empty
  bool IsEmpty();
  // PrintFromHead
  // Print the DLL from the head
  void PrintFromHead();
  // PrintFromTail
  // Print the DLL from the tail
  void PrintFromTail();
  // IsFound
  // Return true if the data is in the DLL
  bool IsFound(string data);
};

#endif