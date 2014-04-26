/*
 * DLList.h
 *
 *  Created on: Apr 22, 2014
 *      Author: Rick Arriola
 */

#pragma once

#include "DLNode.h"
#include <cstdlib>
#include <sstream>
using namespace std;

class DLList {
 public:
  //default constructor, sets contents to 0 and NULL's Next and Previous
  DLList();
  //destructor
  virtual ~DLList();
  //creates a new node starting from the head or 0 position
  void pushFront(int value);
  //creates a new node and places at the end of the chain
  void pushBack(int value);
  //return the value of the contents of the head node
  int getFront() const;
  // return the value of the contents of the tail node
  int getBack() const;
  //deletes the node starting from the head
  void popFront();
  //deletes the node in the next to last position from the end
  void popBack();
  //create SLNode so values are in ascending order from heaad to tail
  void insert(int value);
  //remove first target found, return true on success or false if value is not there
  bool removeFirst(int target);
  //remove all instances of target. return true on success or false if not
  bool removeAll(int target);
  //deletes all nodes in the chain
  void clear();
  //shows the size of the linked list
  unsigned int getSize() const;
  //shows the contents of the linked list with a ',' between them.
  string toString() const;
  //overloaded friend operator <<
  friend ostream& operator <<(ostream& out, const DLList& src);
  //return true if target is in list, else return false
  bool get (int target) const;
  //Search function for target specified
  DLNode* searchIndex(int targetValue) const;

 private:
  //member data
  DLNode* head;
  DLNode* tail;
  unsigned int size;

};
