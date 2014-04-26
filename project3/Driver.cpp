/*
 * new_main.cpp
 *
 *  Created on: Apr 25, 2014
 *      Author: Rician
 */

#include "DLList.h"
#include "DLNode.h"

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) {

  DLList* list;
  stringstream ss;
  string strValue;
  int intValue;

  if (argc != 2) {
    cout << "USAGE: " << argv[0] << " FILENAME" << endl;

  } else {
    string currentLine;
    char input;
    cout << "PROCESSING FILE: " << argv[1] << endl;

    ifstream theFile(argv[1]);
    if (theFile.good()) {

      while (getline(theFile, currentLine)) {
        ss.clear();
        intValue = 0;
        strValue = "";
        bool activeList = false;

        input = currentLine.at(0);

          switch (input) {
            case 'I':
              strValue = currentLine.substr(2);
              ss << strValue;
              ss >> intValue;
              cout << "VALUE " << intValue << " INSERTED" << endl;
              list->insert(intValue);
              break;

            case 'X':
              list->clear();
              cout << "LIST CLEARED" << endl;
              break;

            case 'D':
              delete list;
              list = NULL;
              cout << "LIST DELETED" << endl;
              break;

            case 'A':
              cout << "VALUE " << list->getFront() << " AT HEAD" << endl;
              break;

            case 'K':
              list->popBack();
              cout << "REMOVED TAIL" << endl;
              break;

            case 'C':
              if (activeList == false)
              list = new DLList;
              else if (activeList == true) {
              delete list; 
              list = new DLList; 
              }
              activeList = true;
              cout << "LIST CREATED" << endl;
              break;

             case 'P':
              cout << list->toString() << endl;
              break;

            case 'F':
              strValue = currentLine.substr(2);
              ss << strValue;
              ss >> intValue;
              cout << "VALUE " << intValue << " ADDED TO HEAD" << endl;
              list->pushFront(intValue);
              break;

            case 'B':
              strValue = currentLine.substr(2);
              ss << strValue;
              ss >> intValue;
              cout << "VALUE " << intValue << " ADDED TO TAIL" << endl;
              list->pushBack(intValue);
              break;

            case 'N':
              cout << "LIST SIZE IS " << list->getSize() << endl;
              break;

            case 'Z':
              cout << "VALUE " << list->getBack() << " AT TAIL" << endl;
              break;

            case 'R':
              strValue = currentLine.substr(2);
              ss << strValue;
              ss >> intValue;
              if (list->removeFirst(intValue))
                cout << "VALUE " << intValue << " REMOVED" << endl;
              else
                cout << "VALUE " << intValue << " NOT FOUND" << endl;
              break;

            case 'E':
              strValue = currentLine.substr(2);
              ss << strValue;
              ss >> intValue;
              if (list->removeAll(intValue))
                cout << "VALUE " << intValue << " ELIMINATED" << endl;
              else
                cout << "VALUE " << intValue << " NOT FOUND" << endl;
              break;

              case 'G':
              strValue = currentLine.substr(2);
              ss << strValue;
              ss >> intValue;
              if (list->get(intValue))
                cout << "VALUE " << intValue << " FOUND" << endl;
              else
                cout << "VALUE " << intValue << " NOT FOUND" << endl;
              break;

            case 'T':
              list->popFront();
              cout << "REMOVED HEAD" << endl;
              break;

            default:
              cout << "UNKNOWN COMMAND" << endl;
              break;

          }
        }
      }
     theFile.close();

  }

  return 0;
}
