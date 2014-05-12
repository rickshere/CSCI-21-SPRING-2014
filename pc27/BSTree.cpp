    #include "BSTree.h"
    
    
    BSTree::BSTree() {
        root = NULL;
        size = 0;
    }
    
    BSTree::~BSTree() {
        clear(root);
    }
     
    unsigned int BSTree::getSize() const {
        return size;
    }

    void BSTree::inOrder () {
        inOrder(root);
    }
    
    bool BSTree::remove (int value, BSTNode*& nRoot) {
        if (nRoot == NULL)
            return false;
        else if (nRoot->getContents() > value) 
            return remove(value, nRoot->getLeftChild());
        else if (nRoot->getContents() < value)
            return remove(value, nRoot->getRightChild());
        else {
            if(nRoot->getLeftChild() == NULL) {
                BSTNode* oldRoot = nRoot;
                nRoot = nRoot->getRightChild();
                delete oldRoot;
        } else 
            removeMax(nRoot->getContents(), nRoot->getLeftChild());
        size--;
        return true;
        }
    }
    
	void BSTree::removeMax (int& removed, BSTNode*& nRoot) {
	    if (nRoot->getRightChild() == NULL) {
	        BSTNode* oldNode = nRoot;
	        removed = nRoot->getContents();
	        nRoot = nRoot->getLeftChild();
	        delete oldNode;
	        oldNode = NULL;
	    } else
	        removeMax(removed, nRoot->getRightChild());
	}
    	
	bool BSTree::remove (int value) {
	    return remove(value, root);
	}

    void BSTree::clear() {
        clear(root);
    }
        
	bool BSTree::insert(int newVal) {
        return insert(newVal, root);
    }
    
    void BSTree::inOrder (BSTNode* nRoot) {
        if (nRoot != NULL) {
            inOrder(nRoot->getLeftChild());
            cout << nRoot->getContents() << " ";
            inOrder(nRoot->getRightChild());
        }
    }
   
    void BSTree::clear(BSTNode*& nRoot) {
        if (nRoot == NULL) 
            return;
        clear(nRoot->getLeftChild());
        clear(nRoot->getRightChild());
        delete nRoot;
        nRoot=NULL;
        size--;
            
        
    }
    
    bool BSTree::insert(int newVal, BSTNode*& nRoot) {
        if (nRoot == NULL) {
            nRoot = new BSTNode(newVal);
            size++;
            return true;
        }
        else if (newVal < nRoot->getContents())
            return insert(newVal, nRoot->getLeftChild());
        else if (newVal > nRoot->getContents())
            return insert(newVal, nRoot->getRightChild());
        else 
            return false;
    }

