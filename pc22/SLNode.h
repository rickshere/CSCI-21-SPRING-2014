# pragma once
#include <iostream>
using namespace std;

template <class T>
class SLNode {
    public:
        SLNode () {
            nextNode (NULL);
            contents = 0;
        }
        
        virtual ~SLNode () {
            nextNode = NULL;
        }
        
        void setContents( T newContents) {
            contents = newContents;
        }
        
        T getContents() const {
            return contents;
        }
        
        void setNextNode (SLNode* newNextNode) {
            nextNode = newNextNode;
        }
        
        SLNode* getNextNode () const {
            return nextNode;
        }
        
    private:
        SLNode* nextNode;
        T contents;

};
