/*
 * Programming Challenge 1
 */
#include <cassert>
#include <iostream>
#include <string>
using namespace std;

string greet (string name);
string checkExperience (char hasExperience);

/* for unit testing -- do not alter */
template <typename X, typename A>
void btassert(A assertion);
void unittest (string s, char c);

int main (int argc, char* argv[])
{
	// CODE HERE
	//
	// 1 declare a string variable named userName
	string userName;
	// 2 declare a char variable named programmedBefore
	char programmedBefore;
	//   and initialize programmedBefore to the value 'z'
	programmedBefore = z;
	// 3 display a welcome message to standard output
	// 4 prompt the user for a name
	cout << "Welcome to my program.\nPlease enter your name.\n";
	// 5 read in the name from standard input and store
	//   in the variable userName
	cin >> userName;
	// 6 ask the user the yes/no question "Have you programmed 
	//   in C++ before?"
	cout << "Have you programmed in C++ before?\n";
	cout << "Please type 'y' for yes and 'n' for no.\n";
	// 7 read in the answer from standard input and store
	//   in the variable programmedBefore
	cin >> programmedBefore;
	
	unittest(userName, programmedBefore);
	
	return 0;
}
