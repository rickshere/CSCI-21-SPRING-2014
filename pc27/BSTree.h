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
    	
    	bool remove (int value);


    	void clear(); 
    	
    	unsigned int getSize () const;
    	
    	void inOrder ();

    private:
    	BSTNode* root; 
    	unsigned int size; 
    	bool insert (int, BSTNode*& nRoot);
		bool remove (int, BSTNode*&);
		//, traverse the tree and remove the node containing the target 
        //integer if present, return true; return false if target integer is not in tree
	    void removeMax (int&, BSTNode*&);
	    //helper function for private remove
    	void clear (BSTNode*& nRoot);
    	void inOrder (BSTNode* nRoot);

};