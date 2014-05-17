/*
 *  BSTree.h
 *  Binary Search Tree 
 *
 *  Created on: Apr 29, 2014
 *  Author: Rick Arriola
 */
 
#pragma once
#include "BSTNode.h"
#include <iostream>
#include <cstdlib>
using namespace std;

template <typename T>
class BSTree {
    public:
        /*  default constructor
        *   sets root to NULL
        *   & size to 0 on creation
        */
        BSTree() {
            root = NULL;
            size = 0;
        }
        
        /*  destructor
        *   calls clear function
        */
    	virtual ~BSTree() {
    	    clear(root);
    	}
    	
        /*  type: unsigned int
        *   getSize()
        *   parameters: none
        *   function: return current size
        */
    	unsigned int getSize () const {
    	    return size;
    	}
    	
        /*  type: void
        *   clear()
        *   parameters: none
        *   function: calls the private clear() function
        */
    	void clear() {
    	    clear(root);
    	}
    	
        /*  type: bool
        *   insert()
        *   parameters: newData, templated
        *   function: calls the private insert() function
        */
    	bool insert(T newData) {
            return insert(newData, root);
    	}
    	
        /*  type: bool
        *   find()
        *   parameters: targetData, templated
        *   function: calls the private find() function
        */
    	bool find(T targetData) {
    	    return find(targetData, root);
    	}
    	
        /*  type: bool
        *   insert()
        *   parameters: targetData, templated
        *   function: calls the private remove() function
        */
    	bool remove (T targetData) {
    	    return remove(targetData, root);
    	}
    	
        /*  type: templated return
        *   get()
        *   parameters: targetData, templated
        *   function: calls the private get() function
        */
    	T* get(T targetData) {
    	    return get(targetData, root);
    	}
    	
        /*  type: void
        *   inOrder()
        *   parameters: none
        *   function: calls the private inOrder() function
        */
    	void inOrder() {
    	    inOrder(root);
    	}
    	
        /*  type: void
        *   reverseOrder()
        *   parameters: none
        *   function: calls the private reverseOrder() function
        */
    	void reverseOrder() {
    	    reverseOrder(root);
    	}

    private:
    	BSTNode<T>* root; 
    	unsigned int size;
    	
    	/* insert a new node into the tree */
    	
    	bool insert (T newData, BSTNode<T>*& nRoot) {
    	     if (nRoot == NULL) {
                nRoot = new BSTNode<T>(newData);
                size++;
                return true;
            }
            else if (newData < nRoot->getData())
                return insert(newData, nRoot->getLeftChild());
            else if (newData > nRoot->getData())
                return insert(newData, nRoot->getRightChild());
            else 
                return false;
    	}
    	
        /* removes target node from the tree */    	
        
		bool remove (T targetData, BSTNode<T>*& nRoot) {
		    if (nRoot == NULL)
                return false;
            else if (nRoot->getData() > targetData) 
                return remove(targetData, nRoot->getLeftChild());
            else if (nRoot->getData() < targetData)
                return remove(targetData, nRoot->getRightChild());
            else {
                if(nRoot->getLeftChild() == NULL) {
                    BSTNode<T>* oldRoot = nRoot;
                    nRoot = nRoot->getRightChild();
                    delete oldRoot;
                } else 
                removeMax(nRoot->getData(), nRoot->getLeftChild());
            size--;
            return true;
            }
		}
		
	    /* helps remove function, cycles through nodes until target is found*/
	    
	    void removeMax (T& removed, BSTNode<T>*& nRoot) {
	        if (nRoot->getRightChild() == NULL) {
    	        BSTNode<T>* oldNode = nRoot;
    	        removed = nRoot->getData();
    	        nRoot = nRoot->getLeftChild();
    	        delete oldNode;
    	        oldNode = NULL;
    	    } else
	            removeMax(removed, nRoot->getRightChild());
	    }
	    
	    /* clears all sub-roots within the tree until there is nothing */
	    
    	void clear (BSTNode<T>*& nRoot) {
    	    if (nRoot == NULL) 
                return;
            clear(nRoot->getLeftChild());
            clear(nRoot->getRightChild());
            delete nRoot;
            nRoot=NULL;
            size--;
    	}
    	
    	/* displays all data within each node in ascending order */
    	
    	void inOrder (BSTNode<T>* nRoot) {
    	    if (nRoot != NULL) {
                inOrder(nRoot->getLeftChild());
                cout << nRoot->getData() << endl;
                inOrder(nRoot->getRightChild());
            }
    	}
    	
    	/* displays all data within each node in descending order */
    	
    	void reverseOrder (BSTNode<T>* nRoot) {
    	    if (nRoot != NULL) {
                reverseOrder(nRoot->getRightChild());
                cout << nRoot->getData() << endl;
                reverseOrder(nRoot->getLeftChild());
            }
    	}
    	
    	/* moves through the tree until target is found or returns false */
    	
    	bool find (T targetData, BSTNode<T>*& nRoot) {
    	    if (nRoot == NULL)
    	        return false;
    	    else if (nRoot->getData() == targetData)
    	        return true; 
    	    else if (nRoot->getData() > targetData)
        	    return find(targetData, nRoot->getLeftChild());
            else
    	        return find(targetData, nRoot->getRightChild());
    	}
    	
    	/* moves through the tree until target is found or returns true and
    	*  displays contents of target. false on fail*/
    	
    	T* get (T targetData, BSTNode<T>* nRoot) {
            if (nRoot == NULL)
                return NULL;
            else if (nRoot->getData() == targetData)
                return &nRoot->getData();
            else if (nRoot->getData() > targetData)
    	        return get(targetData, nRoot->getLeftChild());
    	    else
    	        return get(targetData, nRoot->getRightChild());
    	}
    	
};
