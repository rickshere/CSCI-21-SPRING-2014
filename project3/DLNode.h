/*
 * Doubly-linked Node
 *
 * Rick L Arriola
 * Date created: 4/22/14
 *
 * SOURCES USED:
 * Absolute C++
 * techfinite.com
 * cplusplus.com
 * cprogramming.com
 */
#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;

class DLNode {

 public:
  /*
   * Constructor
   * sets contents to 0
   * nextNode and previousNode == NULL
   */
  DLNode();

  /*
   * Overloaded Constructor
   * contents(newContents)
   * nextNode and previousNode == NULL
   */
  DLNode(int newContents);

  /*
   * Destructor
   */
  virtual ~DLNode();

  /*
   * Function setContents()
   * parameters int newContents
   * sets contents to newContents
   */
  void setContents(int newContents);

  /*
   * Function setNext()
   * parameters DLNode* newNext
   * points the nextNode to newNext
   */
  void setNext(DLNode* newNext);

  /*
   * Function setPrevious()
   * parameters DLNode* newPrevious
   * points previousNode to newPrevious
   */
  void setPrevious(DLNode* newPrevious);

  /*
   * Function getContents() const
   * returns the value from the node
   */
  int getContents() const;
  /*
   * Function DLNode* getNext() const
   * returns the nextNode
   */
  DLNode* getNext() const;

  /*
   * Function DLNode* getPrevious () const
   * returns the previousNode
   */
  DLNode* getPrevious() const;

 private:
  int contents;
  DLNode* previousNode;
  DLNode* nextNode;
};

