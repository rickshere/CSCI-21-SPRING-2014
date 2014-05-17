/*
 *  Word.h
 *
 *  Created on: Apr 29, 2014
 *  Author: Rick Arriola
 */
#pragma once 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Word {
 public:
  // default constructor
  Word();
  // overloaded constructor: with string parameter (representing the "word")
  Word(string newWord);
  // destructor
  virtual ~Word();
  //getter and setter
  string getWord() const;
  unsigned int getCount();
  void setWord(string newWord);
  //increment the count by one
  void incrementCount();
  //overloaded operators
  friend bool operator==(const Word& word1, const Word& word2); 
  friend bool operator<(const Word& word1, const Word& word2);  
  friend bool operator>(const Word& word1, const Word& word2);  
  friend ostream& operator<<(ostream& out, const Word& src); 
  
 private:
  /* string word:
   * contain the "word" assigned to this Word instance
   */
  string word;
  /* unsigned int count:
   * contains the count of number of instances "word" is used in the input.
   * defaults to 1.
   */
  unsigned int count;
};
