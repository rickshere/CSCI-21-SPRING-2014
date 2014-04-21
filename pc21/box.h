/*Define a "header only" template class named Box with:

- one data member -- contents (data type templated)
- overloaded constructor -- one parameter newContents to be assigned to contents
- getter (getContents) and setter (setContents)
- friend overloaded operator<<
*/

# pragma once
#include <iostream>
using namespace std;

template <class T>
class Box {
    public:
        Box (T newContents) {
            contents = newContents;
        }
        
        void setContents( T newContents) {
            contents = newContents;
        }
        T getContents() const {
            return contents;
        }
        friend ostream& operator << (ostream& out, const Box& src) {
            out << src.getContents();
            return out;
        }
        
    private:
        T contents;

};