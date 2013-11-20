// File: Graph.h
// Programmer: Connor Freeman

#ifndef Graph_H
#define Graph_H

#include <iostream>
#include <string>
using namespace std;

// Double linked list class
class Graph {
private:
  // Node structure
  class node {
    int data;
    int index;
    node * prev;
    node * next;
    node * row;
    friend class Graph;
  };
  typedef class node Node;
  typedef class node * NodePtr;

  NodePtr head;
  NodePtr tail;
  NodePtr curr;

public:
  // Graph Constructor
  Graph();

  // insertHead
  // Insert new data to the head of the Graph
  void insertHead(int data);

  // insertTail
  // Insert new data to the tail of the Graph
  void insertTail(int data);

  // IsEmpty
  // Return true if the Graph is empty
  bool IsEmpty();

  // PrintFromHead
  // Print the Graph from the head
  void PrintFromHead();

  // PrintFromTail
  // Print the Graph from the tail
  void PrintFromTail();

  // DepthFirstSearch
  // Iterate thru Graph from start node
  void DepthFirstSearch(int index, int startNode);

  // IsFound
  // Return true if the data is in the Graph
  bool IsFound(int data);

  void setStartNode(int index, int startNode);
};

#endif