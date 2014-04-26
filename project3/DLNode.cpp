/*
 * DLNode.cpp
 *
 *  Created on: Apr 22, 2014
 *      Author: Rick Arriola
 */

#include "DLNode.h"

DLNode::DLNode()
: contents (0) , previousNode (NULL) , nextNode (NULL)
{}

DLNode::DLNode(int newContents)
: contents (newContents) , previousNode (NULL) , nextNode (NULL)
{}

DLNode::~DLNode ()
{}

void DLNode::setContents(int newContents) {
  contents = newContents;
}

void DLNode::setNext (DLNode* newNext) {
  nextNode = newNext;
}

void DLNode::setPrevious (DLNode* newPrevious) {
  previousNode = newPrevious;
}

int DLNode::getContents () const {
  return contents;
}
DLNode* DLNode::getNext() const {
  return nextNode;
}

DLNode* DLNode::getPrevious() const {
  return previousNode;
}
