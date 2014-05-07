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
        	
    void BSTree::clear() {
        clear(root);
        size = 0;
        root = NULL;
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
        nRoot = NULL;
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

