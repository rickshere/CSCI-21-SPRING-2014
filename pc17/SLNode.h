#pragma once
#include <cassert>
#include <cstdlib>
#include <iostream>
using namespace std;

class SLNode {
    
  public:
	SLNode();
	SLNode(int newContents);
	virtual ~SLNode();
	
	void setContents (int newContents);
	int getContents () const;
	
	void setNextNode (SLNode* newNextNode);
	SLNode* getNextNode () const;
	
  private:
    SLNode* nextNode;
    int contents;
};