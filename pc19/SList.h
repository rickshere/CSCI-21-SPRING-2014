#pragma once

#include "SLNode.h"
#include <cstdlib>
#include <sstream>
using namespace std;

class SList {
  public:
    //default constructor
	SList();
    //destructor
	virtual ~SList();
	//creates a new node starting from the head or 0 position
	void insertHead (int value);
	//creates a new node and places at the end of the chain
	void insertTail (int value);
	//deletes the node starting from the head
	void removeHead ();
    //deletes the node in the next to last position from the end
    void removeTail ();
    //deletes all nodes in the chain
	void clear ();
    //shows the size of the linked list
	unsigned int getSize () const;
	//shows the contents of the linked list with a ',' between them. 
	string toString () const; 
  private:
    //member data
    SLNode* head;
    unsigned int size;
                         
};