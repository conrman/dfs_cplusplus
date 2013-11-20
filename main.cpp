// File: main.cpp
// Programmer: Connor Freeman

#include "Graph.h"

#include <iostream>
#include <string>
#include <vector>

#define prompt cout<<"dfs> "
#define error cout<<"Error!"<<endl
using namespace std;

vector<int> handleInput(int index) {
  int number;
  vector<int> temp;
  for (int i = 0; i < index*index; i++) {
    cin >> number;
    temp.push_back(number);
  }
  return temp;
}

int main() {
  // Declare Graph
  string command;
  int index, startNode;
  bool done = false;
  vector<int> input;
  Graph graph;

  while (!done) {
    prompt;
    cin >> command;
    if (command == "create") {
      cin >> index;
      graph.setIndex(index);
      input = handleInput(index);
      for (vector<int>::iterator it = input.begin() ; it != input.end(); ++it) {
        graph.insertTail(*it);
      }

      graph.PrintFromHead();

    }
    else if (command == "dfs") {
      cin >> startNode;
      graph.DepthFirstSearch(index, startNode);

    }
    else if (command == "quit" || command == "exit") {
      done = true;
    }
    else {
      error;
    }
  }


  // cout << boolalpha << "IsEmpty? " << graph.IsEmpty() << endl;
  // graph.PrintFromHead();
  // graph.PrintFromTail();
  // cout << endl;

  // graph.insertTail(10);
  // graph.PrintFromHead();
  // graph.PrintFromTail();
  // cout << endl;

  // graph.insertTail(5);
  // graph.PrintFromHead();
  // graph.PrintFromTail();
  // cout << endl;

  // graph.insertHead(15);
  // graph.PrintFromHead();
  // graph.PrintFromTail();
  // cout << endl;

  // graph.insertHead(20);
  // cout << boolalpha << "IsEmpty? " << graph.IsEmpty() << endl;
  // graph.PrintFromHead();
  // graph.PrintFromTail();
  // cout << endl;

  // cout << boolalpha << "1 IsFound? " << graph.IsFound(1) << endl;
  // cout << boolalpha << "20 IsFound? " << graph.IsFound(20) << endl;
  // cout << boolalpha << "15 IsFound? " << graph.IsFound(15) << endl;
  // cout << boolalpha << "1000 IsFound? " << graph.IsFound(1000) << endl;

  return 0;
}