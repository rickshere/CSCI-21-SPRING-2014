/*
 * DLList.cpp
 *
 *  Created on: Apr 22, 2014
 *      Author: Rick Arriola
 */
#include "DLList.h"
#include "DLNode.h"


DLList::DLList()
    : head(NULL),
      tail(NULL),
      size(0) {
}

DLList::~DLList() {
  clear();
}

void DLList::pushFront(int value) {
  DLNode* newHead = new DLNode(value);
  if (head == NULL) {
    head = newHead;
    tail = head;
    size++;
  } else {
    newHead->setNext(head);
    head->setPrevious(newHead);
    head = newHead;
    size++;
  }
}

void DLList::pushBack(int value) {
  if (head == NULL) {
    pushFront(value);
  } else {
    DLNode* newTail = new DLNode(value);
    newTail->setPrevious(tail);
    tail->setNext(newTail);
    tail = newTail;
    size++;
  }
}

int DLList::getFront() const {
  if (head != NULL)
    return head->getContents();
  else
    throw string("LIST EMPTY");
}

int DLList::getBack() const {
  if (tail != NULL)
    return tail->getContents();
  else
    throw string("LIST EMPTY");
}

void DLList::popFront() {
  if (head != NULL && head->getNext() == NULL) {
    delete head;
    head = NULL;
    tail = head;
    size--;
  } else if (head != NULL && head->getNext() != NULL) {
    DLNode* discard = head;
    head = head->getNext();
    head->setPrevious(NULL);
    delete discard;
    size--;
  }
}

void DLList::popBack() {
  if (tail != NULL && tail->getPrevious() == NULL) {
    delete tail;
    head = NULL;
    tail = NULL;
    size--;
  } else if (tail != NULL && tail->getPrevious() != NULL) {
    DLNode* discard = tail;
    tail = tail->getPrevious();
    tail->setNext(NULL);
    delete discard;
    size--;
  }
}

void DLList::insert(int newValue) {
  if (head == NULL)
    pushFront(newValue);
  else if (newValue <= head->getContents())
    pushFront(newValue);
  else if (newValue >= tail->getContents())
    pushBack(newValue);
  else {
    DLNode* spot = head;

    while (spot->getNext() != NULL && newValue > spot->getContents())
      spot = spot->getNext();

    if (spot->getNext() == NULL && newValue >= spot->getContents())
      pushBack(newValue);
    else {
      DLNode* newNode = new DLNode(newValue);
      DLNode* trailer = spot->getPrevious();
      trailer->setNext(newNode);
      newNode->setNext(spot);
      newNode->setPrevious(trailer);
      spot->setPrevious(newNode);
      size++;
    }

  }
}

bool DLList::removeFirst(int target) {
  if (head == NULL)
    return false;
  else {
    DLNode* targetFound = searchIndex(target);
    targetFound ->getPrevious() -> setNext(targetFound ->getNext());
    targetFound ->getNext() ->setPrevious (targetFound ->getPrevious());
    targetFound = NULL;
    delete targetFound;
    size--;
    return true;
  }
}

bool DLList::removeAll(int target) {
  if (head == NULL)
    return false;
  bool targetFound = false;
  while (removeFirst(target)) {
    targetFound = true;
  }
  return targetFound;
}

void DLList::clear() {
  while (head != NULL)
    popFront();

}

unsigned int DLList::getSize() const {
  return size;
}

string DLList::toString() const {
  if (head == NULL)
    return string("");
  else {
    stringstream ss;

    for (DLNode* i = head; i != NULL; i = i->getNext()) {
      ss << i->getContents();
      if ((i->getNext()) != NULL)
        ss << ',';
    }
    return ss.str();
  }
}

ostream& operator <<(ostream& out, const DLList& src) {
  out << src.toString();
  return out;
}

DLNode* DLList::searchIndex(int targetValue) const {
  DLNode* nodeInQuestion = head;
  for (unsigned int i = 0; i < size; i++) {
    if (nodeInQuestion -> getContents() == targetValue) {
      return nodeInQuestion;
    } else
    nodeInQuestion = nodeInQuestion->getNext();
  }
  return NULL;
}

bool DLList::get(int target) const {

  if (searchIndex(target) == NULL)
    return false;
  else
    return true;
}
