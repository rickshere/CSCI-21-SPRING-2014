/*
 * Word.cpp
 *
 *  Created on: Apr 30, 2014
 *      Author: Rician
 */

#include "Word.h"

/*  default constructor
*   word is set to "" &
*   count is default to 1
*/
Word::Word() {
  word = "";
  count = 1;
}

/*  overloaded constructor: 
*   with string parameter (representing the "Word")
*   count is default to 1
*/
Word::Word(string newWord) {
  word = newWord;
  count = 1;
}

//  destructor
Word::~Word() {

}

/*  getter and setter
*   setWord() parameter, newWord to word
*   getWord() return word
*   getCount() return current word count
*/

string Word::getWord() const {
  return word;
}

unsigned int Word::getCount() {
    return count;
}

void Word::setWord(string newWord) {
  word = newWord;
}

//  increment the count by one
void Word::incrementCount() {
  count++;
}

/*
    operator==
    check the sizes of the two Words
    check each character to see if the Words are the same
    capitalize all letters so case does not matter
    return true if the same
    false if not 
*/
bool operator==(const Word& word1, const Word& word2) {
    string str1(word1.word);
	string str2(word2.word);
	if (str1.size() != str2.size()) 
		return false;
	else 
		for(unsigned int i = 0; i < str1.size(); i++)
			if (toupper(str1[i]) != toupper(str2[i]))
				return false;
	return true;
}

/*
    operator<
    create string for each Word
    capitalize both strings
    check if first string is smaller than the second
    return true if so
    false if not
*/

bool operator<(const Word& word1, const Word& word2) {
    string str1 = word1.word;
    string str2 = word2.word;
    for (unsigned int i = 0; i < str1.size(); i++)
        toupper(str1[i]);
    for (unsigned int i = 0; i < str2.size(); i++)
        toupper(str2[i]);
    if (str1 < str2)
        return true;
    else
        return false;
}

/*
    operator>
    create a string for each Word
    capitalize both strings
    check if first string is greater than the second
    return true if so
    false if not
*/

bool operator>(const Word& word1, const Word& word2) {
    string str1 = word1.word;
    string str2 = word2.word;
    for (unsigned int i = 0; i < str1.size(); i++)
        toupper(str1[i]);
    for (unsigned int i = 0; i < str2.size(); i++)
        toupper(str2[i]);
    if (str1 > str2)
        return true;
    else
        return false;
}

/*
    place contents of Word formatted as "Word COUNT" on the stream
*/

ostream& operator<<(ostream& out, const Word& src) {
    return out << src.word << " " << src.count;
}
