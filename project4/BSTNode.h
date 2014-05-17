/*
 *  BSTNode.h
 *  Binary Search Tree Node
 *
 *  Created on: Apr 29, 2014
 *  Author: Rick Arriola
 */
 
#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

template <typename T>
class BSTNode {

  public:
        /*  default constructor:
        *   sets leftChild and rightChild to NULL
        */
        BSTNode() {
            leftChild = NULL;
            rightChild = NULL;
        }
        
        /*  overloaded constructor:
        *   sets leftChild and rightChild to NULL
        *   sets parameter data to private data
        */
        BSTNode(T newData) {
            leftChild = NULL;
            rightChild = NULL;
            data = newData;
        }
 
        /*  destructor:
        *   sets leftChild and rightChild to NULL
        */
        virtual ~BSTNode() {
            leftChild = NULL; 
            rightChild = NULL;
        }
        
        /*  type void
        *   setData()
        *   parameters: templated newData
        */
    	void setData (T newData) {
            data = newData;
        }
    	
        /*  type template return
        *   getData()
        *   parameters: none
        *   function: return data within Node 
        */
    	T getData () const {
            return data;
        }
        
    	/*  type template return
        *   getData()
        *   parameters: none
        *   function: return data within Node 
        */
    	T& getData () {
    	    return data;
    	}
    	
    	/*  type void
        *   setLeftChild()
        *   parameters: newLeftChild, BSTNode*
        *   function: create a newLeftChild Node and set it to leftChild 
        */
    	void setLeftChild (BSTNode* newLeftChild) {
    	    leftChild = newLeftChild;
    	}
    	
    	/*  type void
        *   setRightChild()
        *   parameters: newRightChild, BSTNode*
        *   function: create a newRightChild Node and set it to rightChild 
        */
    	void setRightChild (BSTNode* newRightChild) {
    	    rightChild = newRightChild;
    	}
    	
    	/*  type return
        *   getLeftChild()
        *   parameters: none
        *   function: return contents of leftChild
        */
    	BSTNode* getLeftChild () const {
    	    return leftChild;
    	}
    	
    	/*  type return
        *   getLeftChild()
        *   parameters: none
        *   function: return contents of node within leftChild
        */
    	BSTNode*& getLeftChild () {
    	    return leftChild;
    	}
    	
    	/*  type return
        *   getRightChild()
        *   parameters: none
        *   function: return contents of rightChild
        */
    	BSTNode* getRightChild () const {
    	    return rightChild; 
    	}
    	
    	/*  type return
        *   getLeftChild()
        *   parameters: none
        *   function: return contents of node within rightChild
        */
    	BSTNode*& getRightChild () {
    	    return rightChild;
    	}

	private:
    	BSTNode* leftChild;
    	BSTNode* rightChild;
        T data;
};
