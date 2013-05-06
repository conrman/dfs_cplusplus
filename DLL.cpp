// File: DLL.cpp
// Created Date: May 03, 2013 
// Programmer: Ka-Son Chan
// Description: This DLL.cpp is the Doubly Linked List (DLL) .cpp file which
// contains all the variables, functions and classes definitions.

#include "DLL.h"

// DLL Constructor
DLL::DLL() {
  head = NULL;
  tail = NULL;
}

// InsertToHead
// Insert new data to the head of the DLL
void DLL::InsertToHead(string data) {
  cout << "Insert " << data << " to head" << endl;

  if (head == NULL && tail == NULL) {
    NodePtr newPtr = new Node();
    newPtr->data = data;
    newPtr->prev = NULL;
    newPtr->next = NULL; 
    head = newPtr;
    tail = newPtr;
  }
  else {
    NodePtr newPtr = new Node();
    newPtr->data = data;
    head->prev = newPtr;
    newPtr->prev = NULL;
    newPtr->next = head;
    head = newPtr;
  }
}

// InsertToTail
// Insert new data to the tail of the DLL
void DLL::InsertToTail(string data) {
  cout << "Insert " << data << " to tail" << endl;

  if (head == NULL && tail == NULL) {
    NodePtr newPtr = new Node();
    newPtr->data = data;
    newPtr->prev = NULL;
    newPtr->next = NULL; 
    head = newPtr;
    tail = newPtr;
  }
  else {
    NodePtr newPtr = new Node();
    newPtr->data = data;
    tail->next = newPtr;
    newPtr->prev = tail;
    tail = newPtr;
    newPtr->next = NULL;
  }
}

// IsEmpty
// Return true if the DLL is empty
bool DLL::IsEmpty() {
  if (head == NULL && tail == NULL)
    return true;
  else
    return false;
}

// PrintFromHead
// Print the DLL from the head
void DLL::PrintFromHead() {
  NodePtr tempPtr = head;
  cout << "Head -> ";
  while (tempPtr) {
    cout << tempPtr->data << " -> ";
    tempPtr = tempPtr->next;
  }
  cout << "NULL" << endl;
}

// PrintFromTail
// Print the DLL from the tail
void DLL::PrintFromTail() {
  NodePtr tempPtr = tail;
  cout << "Tail -> ";
  while (tempPtr) {
    cout << tempPtr->data << " -> ";
    tempPtr = tempPtr->prev;
  }
  cout << "NULL" << endl;
}

// Found
// Return true if the data is in the DLL
bool DLL::IsFound(string data) {
  NodePtr tempPtr = head;
  while (tempPtr) {
    if(data == tempPtr->data)
      return true;
    tempPtr = tempPtr->next;
  }
  return false;
}