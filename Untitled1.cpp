#include <cassert>
#include <climits>
#include <iostream>
#include <string>
using namespace std;

void countCharacters (string theString, int& alpha, int& num);

void countCharacters (string theString, int& alpha, int& num) {
    
    for (int i = 0; i < theString.length(); i++) {
        if (isdigit(theString[i]))
          num++;
        if (isalpha(theString[i]))
          alpha += 1;
    }
}

template <typename X, typename A>
void btassert(A assertion);
void unittest ();

int main (int argc, char* argv[])
{
	unittest();
	
	return 0;
}



void unittest ()
{
	cout << "\nSTARTING UNIT TEST\n\n";

	int n1=0, n2=0;

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
	}
