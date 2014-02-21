/*
 * Programming Project 1
 *
 * Rick Arriola
 * Date created: 2/19/14
 * Last date modified: 2/20/14
 *
 */
#include <cassert>
#include <climits>
#include <iostream>
#include <string>
using namespace std;

//Function Declarations:
void countCharacters(string theString, int& alpha, int& num);
/*
 *  Count the number of alphabetic and numeric characters in a string.
 *  function name: countCharacters
 *  Parameters: string, int&, int&;
 *  Return value: void
 */
string upAndDown(string theString);
/*
 *  Capitalize/lowercase every other character in a string.
 *  Function name: upAndDown;
 *  Parameter: string;
 *  Return value: string
 */
int countWords(string theString);
/*
 *  Count the number of words in the string.
 *  Function name: countWords;
 *  Parameter: string;
 *  Return value: int
 */
int computeAverage(int values[], int arraySize);
/*
 *  Calculate the average value from the array.
 *  Function name: computeAverage;
 *  Parameters: int values[], int arraySize
 *  Return value: int
 */
int findMinValue(int values[], int arraySize);
/*
 *  Find the minimum value within the array.
 *  Function name: findMinValue;
 *  Parameters: int values[], int arraySize
 *  Return value: int
 */
int findMaxValue(int values[], int arraySize);
/*
 *  Find the Maximum Value within the array.
 *  Function name: findMaxValue;
 *  Parameters: int values[], int arraySize
 *  Return value: int
 */

//Function Definitions:
void countCharacters(string theString, int& alpha, int& num) {
  alpha = 0;
  num = 0;
  for (unsigned int i = 0; i < theString.length(); i++) {
    if (isdigit(theString[i]))
      num += 1;
    else if (isalpha(theString[i]))
      alpha += 1;
  }
}

string upAndDown(string theString) {
  for (unsigned int i = 0; i < theString.length(); i++) {
    theString[i] = tolower(theString[i]);
    if (i % 2 == 0)
      theString[i] = toupper(theString[i]);
  }
  return theString;
}

int countWords(string theString) {
  int wordCount = 1;
  if (theString == "")
    return wordCount = 0;
  for (unsigned int i = 0; i < theString.length(); i++) {
    if (isspace(theString[i])) {
      wordCount += 1;
    }
  }
  return wordCount;
}

int computeAverage(int values[], int arraySize) {
  int avg = 0;
  int total = 0;
  for (int i = 0; i < arraySize; i++) {
    total += values[i];
  }
  avg = total / arraySize;
  return avg;
}

int findMinValue(int values[], int arraySize) {
  int minValue = values[0];
  for (int i = 0; i < arraySize; i++) {
    if (minValue > values[i])
      minValue = values[i];
  }
  return minValue;
}

int findMaxValue(int values[], int arraySize) {
  int maxValue = values[0];
  for (int i = 0; i < arraySize; i++) {
    if (maxValue < values[i])
      maxValue = values[i];
  }
  return maxValue;
}

/* for unit testing -- do not alter */
template<typename X, typename A>
void btassert(A assertion);
void unittest();

int main(int, char*[]) {
  unittest();

  return 0;
}

/*
 * Unit testing functions. Do not alter.
 */
void unittest() {
  cout << "\nSTARTING UNIT TEST\n\n";

  int n1 = 0, n2 = 0;

  try {
    countCharacters("", n1, n2);
    btassert<bool>((n1 == 0) && (n2 == 0));
    cout << "Passed TEST 1: countCharacters(empty string)\n";
  } catch (bool b) {
    cout << "# FAILED TEST 1 #\n";
  }

  try {
    countCharacters("hello", n1, n2);
    btassert<bool>((n1 == 5) && (n2 == 0));
    cout << "Passed TEST 2: countCharacters(\"hello\")\n";
  } catch (bool b) {
    cout << "# FAILED TEST 2 #\n";
  }

  try {
    countCharacters("12345", n1, n2);
    btassert<bool>((n1 == 0) && (n2 == 5));
    cout << "Passed TEST 3: countCharacters(\"12345\")\n";
  } catch (bool b) {
    cout << "# FAILED TEST 3 #\n";
  }

  try {
    countCharacters("hello 12345", n1, n2);
    btassert<bool>((n1 == 5) && (n2 == 5));
    cout << "Passed TEST 4: countCharacters(\"hello 12345\")\n";
  } catch (bool b) {
    cout << "# FAILED TEST 4 #\n";
  }

  try {
    countCharacters("&,.", n1, n2);
    btassert<bool>((n1 == 0) && (n2 == 0));
    cout << "Passed TEST 5: countCharacters(\"&,.\")\n";
  } catch (bool b) {
    cout << "# FAILED TEST 5 #\n";
  }

  string s;

  try {
    s = upAndDown("hello");
    btassert<bool>(s == "HeLlO");
    cout << "Passed TEST 6: upAndDown(\"hello\")\n";
  } catch (bool b) {
    cout << "# FAILED TEST 6 #\n";
  }

  try {
    s = upAndDown("HeLlO");
    btassert<bool>(s == "HeLlO");
    cout << "Passed TEST 7: upAndDown(\"HeLlO\")\n";
  } catch (bool b) {
    cout << "# FAILED TEST 7 #\n";
  }

  try {
    s = upAndDown("hElLo");
    btassert<bool>(s == "HeLlO");
    cout << "Passed TEST 8: upAndDown(\"hElLo\")\n";
  } catch (bool b) {
    cout << "# FAILED TEST 8 #\n";
  }

  try {
    s = upAndDown("");
    btassert<bool>(s == "");
    cout << "Passed TEST 9: upAndDown(empty string)\n";
  } catch (bool b) {
    cout << "# FAILED TEST 9 #\n";
  }

  try {
    s = upAndDown("a");
    btassert<bool>(s == "A");
    cout << "Passed TEST 10: upAndDown(\"a\")\n";
  } catch (bool b) {
    cout << "# FAILED TEST 10 #\n";
  }

  try {
    btassert<bool>(countWords("") == 0);
    cout << "Passed TEST 11: countWords(empty string)\n";
  } catch (bool b) {
    cout << "# FAILED TEST 11 #\n";
  }

  try {
    btassert<bool>(countWords("hello") == 1);
    cout << "Passed TEST 12: countWords(\"hello\")\n";
  } catch (bool b) {
    cout << "# FAILED TEST 12 #\n";
  }

  try {
    btassert<bool>(countWords("hello,world") == 1);
    cout << "Passed TEST 13: countWords(\"hello,world\")\n";
  } catch (bool b) {
    cout << "# FAILED TEST 13 #\n";
  }

  try {
    btassert<bool>(countWords("hello world") == 2);
    cout << "Passed TEST 14: countWords(\"hello world\")\n";
  } catch (bool b) {
    cout << "# FAILED TEST 14 #\n";
  }

  try {
    btassert<bool>(countWords("hello, world") == 2);
    cout << "Passed TEST 15: countWords(\"hello, world\")\n";
  } catch (bool b) {
    cout << "# FAILED TEST 15 #\n";
  }

  int values[] = { 10, 20, 30 };
  try {
    btassert<bool>(computeAverage(values, 3) == 20);
    cout << "Passed TEST 16: computeAverage([10,20,30])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 16 #\n";
  }

  values[0] = 0, values[1] = 0, values[2] = 0;
  try {
    btassert<bool>(computeAverage(values, 3) == 0);
    cout << "Passed TEST 17: computeAverage([0,0,0])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 17 #\n";
  }

  values[0] = 5, values[1] = 7, values[2] = 11;
  try {
    btassert<bool>(computeAverage(values, 3) == 7);
    cout << "Passed TEST 18: computeAverages([5,7,11])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 18 #\n";
  }

  values[0] = -10, values[1] = -20, values[2] = -30;
  try {
    btassert<bool>(computeAverage(values, 3) == -20);
    cout << "Passed TEST 19: computeAverages([-10,-20,-30])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 19 #\n";
  }

  values[0] = -5, values[1] = 0, values[2] = 5;
  try {
    btassert<bool>(computeAverage(values, 3) == 0);
    cout << "Passed TEST 20: computeAverages([-5,0,5])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 20 #\n";
  }

  values[0] = -1, values[1] = 0, values[2] = 1;
  try {
    btassert<bool>(findMinValue(values, 3) == -1);
    cout << "Passed TEST 21: findMinValue([-1,0,1])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 21 #\n";
  }

  values[0] = -3, values[1] = -2, values[2] = -1;
  try {
    btassert<bool>(findMinValue(values, 3) == -3);
    cout << "Passed TEST 22: findMinValue([-3,-2,-1])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 22 #\n";
  }

  values[0] = 0, values[1] = 1, values[2] = 2;
  try {
    btassert<bool>(findMinValue(values, 3) == 0);
    cout << "Passed TEST 23: findMinValue([0,1,2])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 23 #\n";
  }

  values[0] = 1, values[1] = 1, values[2] = 1;
  try {
    btassert<bool>(findMinValue(values, 3) == 1);
    cout << "Passed TEST 24: findMinValue([1,1,1])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 24 #\n";
  }

  values[0] = INT_MAX, values[1] = INT_MAX, values[2] = INT_MAX;
  try {
    btassert<bool>(findMinValue(values, 3) == INT_MAX);
    cout << "Passed TEST 25: findMinValue([INT_MAX,INT_MAX,INT_MAX])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 25 #\n";
  }

  values[0] = -1, values[1] = 0, values[2] = 1;
  try {
    btassert<bool>(findMaxValue(values, 3) == 1);
    cout << "Passed TEST 26: findMaxValue([-1,0,1])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 26 #\n";
  }

  values[0] = -3, values[1] = -2, values[2] = -1;
  try {
    btassert<bool>(findMaxValue(values, 3) == -1);
    cout << "Passed TEST 27: findMaxValue([-3,-2,-1])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 27 #\n";
  }

  values[0] = 0, values[1] = 1, values[2] = 2;
  try {
    btassert<bool>(findMaxValue(values, 3) == 2);
    cout << "Passed TEST 28: findMaxValue([0,1,2])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 28 #\n";
  }

  values[0] = 1, values[1] = 1, values[2] = 1;
  try {
    btassert<bool>(findMaxValue(values, 3) == 1);
    cout << "Passed TEST 29: findMaxValue([1,1,1])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 29 #\n";
  }

  values[0] = INT_MIN, values[1] = INT_MIN, values[2] = INT_MIN;
  try {
    btassert<bool>(findMaxValue(values, 3) == INT_MIN);
    cout << "Passed TEST 30: findMaxValue([INT_MIN,INT_MIN,INT_MIN])\n";
  } catch (bool b) {
    cout << "# FAILED TEST 30 #\n";
  }

  cout << "\nUNIT TEST COMPLETE\n\n";
}

template<typename X, typename A>
void btassert(A assertion) {
  if (!assertion)
    throw X();
}
