#pragma once
#include "BSTNode.h"
#include <iostream>
#include <cstdlib>
using namespace std;

class BSTree {

    public:
        BSTree();
        
    	virtual ~BSTree();
    	
    	bool insert(int newVal);

    	void clear(); 
    	
    	unsigned int getSize () const;
    	
    	void inOrder ();

    private:
    	BSTNode* root; 
    	unsigned int size; 
    	bool insert (int, BSTNode*& nRoot);
    	void clear (BSTNode*& nRoot);
    	void inOrder (BSTNode* nRoot);

};