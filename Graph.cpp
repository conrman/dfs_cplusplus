// File: Graph.cpp
// Programmer: Connor Freeman

#include "Graph.h"

// Graph Constructor
Graph::Graph() {
  head = NULL;
  tail = NULL;
  curr = NULL;
  index = 0;
}

// insertHead
// Insert new data to the head of the Graph
void Graph::insertHead(int data) {
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

// insertTail
// Insert new data to the tail of the Graph
void Graph::insertTail(int data) {
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
// Return true if the Graph is empty
bool Graph::IsEmpty() {
  if (head == NULL && tail == NULL)
    return true;
  else
    return false;
}

// PrintFromHead
// Print the Graph from the head
void Graph::PrintFromHead() {
  NodePtr tempPtr = head;
  cout << "Head -> ";
  while (tempPtr) {
    cout << tempPtr->data << " -> ";
    tempPtr = tempPtr->next;
  }
  cout << "NULL" << endl;
}

// PrintFromTail
// Print the Graph from the tail
void Graph::PrintFromTail() {
  NodePtr tempPtr = tail;
  cout << "Tail -> ";
  while (tempPtr) {
    cout << tempPtr->data << " -> ";
    tempPtr = tempPtr->prev;
  }
  cout << "NULL" << endl;
}

// Found
// Return true if the data is in the Graph
bool Graph::IsFound(int data) {
  NodePtr tempPtr = head;
  while (tempPtr) {
    if(data == tempPtr->data)
      return true;
    tempPtr = tempPtr->next;
  }
  return false;
}

// Depth Frist Search
// Iterate thru Graph from start node
void Graph::DepthFirstSearch(int index, int startNode) {
  NodePtr tempPtr = head;

} 

void Graph::setIndex(int data) {
  index = data;
}

void Graph::setRows() {
  curr = head;

  for()
}