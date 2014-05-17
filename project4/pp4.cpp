/*
 *  pp4.cpp
 *
 *  Created on: April 30, 2014
 *  Author: Rick Arriola
 */
 
#include "Word.h"
#include "BSTNode.h"
#include "BSTree.h"
#include <fstream>
#include <sstream>


int main (int argc, char* argv[]) {
    
	if(argc < 2)
		cout << argv[0] << " Needs an additional argument to process.\n";
	else {
        ifstream currentFile(argv[1]);
        if (currentFile.is_open()) {
		    string str;
		    BSTree<Word>* list = NULL;
		    bool listIsActive = false;
            while (!currentFile.eof()) {
			    getline(currentFile, str);
			    string data;
                if (str[0] == '#') {
                
			    } else if (str[0] == 'C') {
				    if (listIsActive){
					    delete list;
					    list = new BSTree<Word>;
				    } else {
					    list = new BSTree<Word>;
					    listIsActive = true;
				    }
				    cout << "TREE CREATED\n";
			    } else if (str[0] == 'X') {
				    if (listIsActive) {
					    list->clear();
					    cout << "TREE CLEARED\n";
				    } else if (!listIsActive)
					    cout << "MUST CREATE TREE INSTANCE\n";
				    else 
					    cout << "TREE EMPTY\n";
			    } else if (str[0] == 'D') {
				    if (listIsActive){
					    delete list;
					    list = NULL;
					    listIsActive = false;
					    cout << "TREE DELETED\n";
				    } else
					cout << "MUST CREATE TREE INSTANCE\n";
			    } else if (str[0] == 'I') {
				    if (listIsActive){
					    stringstream ss(str.substr(2));
					    ss >> data;
					    if(!list->find(Word(data))){
						    list->insert(Word(data));
						    cout << "WORD " << data << " INSERTED\n";
					    } else {
						    list->get(Word(data))->incrementCount();
						    cout << "WORD " << data << " INCREMENTED\n";
					    }
				    } else if (!listIsActive)
				    	cout << "MUST CREATE TREE INSTANCE\n";
				    else
					    cout << "TREE EMPTY\n";
			    } else if (str[0] == 'F') {
				    if (!listIsActive)
					    cout << "MUST CREATE TREE INSTANCE\n";
				    else if (list != NULL and list->getSize() != 0) {
					    stringstream ss(str.substr(2));
					    ss >> data;
					    if (list->find(Word(data)))
						    cout << "FOUND " << data << endl;
					    else
						    cout << data << " NOT FOUND\n";
				    } else
					    cout << "TREE EMPTY\n";
			    } else if (str[0] == 'R') {
				    if(!listIsActive)
					    cout << "MUST CREATE TREE INSTANCE\n";
				    else if (list != NULL and list->getSize() != 0) {
					    stringstream ss(str.substr(2));
					    ss >> data;
					    if (list->remove(Word(data))) 
						    cout << "REMOVED " << data << endl;
					    else
					    	cout << data << " NOT FOUND\n";
	                } else
					    cout << "TREE EMPTY\n";
			    } else if (str[0] == 'G') {
				    if (!listIsActive)
				    	cout << "MUST CREATE TREE INSTANCE\n";
				    else if (list != NULL && list->getSize() != 0) {
    					stringstream ss(str.substr(2));
    					ss >> data;
    					Word* tempWord;
    					tempWord = list->get(Word(data));
    					if (tempWord != NULL) 
    						cout << "GOT " << *tempWord << endl;
    					else
    						cout << data << " NOT FOUND\n";
    				} else
    					cout << "TREE EMPTY\n";
			    } else if (str[0] == 'N') {
				    if (listIsActive) 
					    cout << "TREE SIZE IS " << list->getSize() << endl;
				    else if (!listIsActive)
					    cout << "MUST CREATE TREE INSTANCE\n";
				    else
				    	cout << "TREE EMPTY\n";
				} else if (str[0] == 'O') {
				    if (!listIsActive)
					    cout << "MUST CREATE TREE INSTANCE\n";
				    else if (listIsActive && list != NULL && list->getSize() > 0)
					    list->inOrder();
				    else
					    cout << "TREE EMPTY\n";
			    } else if (str[0] == 'E') {
				    if (!listIsActive) 
					    cout << "MUST CREATE TREE INSTANCE\n";
				    else if (listIsActive && list != NULL && list->getSize() > 0)
					    list->reverseOrder();
				    else
					    cout << "TREE EMPTY\n";
			    } else
			    	cout << "INVALID INPUT\n";
            }		
            currentFile.close();
        } else 
		    cout << "File not found - Please enter correct file name.\n";
	}
	return 0;
}
