/***************************************************************
 * This program extracts the first digit of an input integer.  *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ( )
{ 
	// Variables Declaration
	unsigned int givenInt, firstDigit; 

	// Prompt and Input
	cout << "Enter a positive integer: ";
	cin >> givenInt;

	// Processing
	firstDigit = givenInt % 10 ;

	// Output
	cout << "Entered integer: " << givenInt << endl;
	cout << "Extracted first digit: " << firstDigit << endl;    

	return 0;
}

/*
Run:
	Enter a positive integer: 45672
	Entered integer: 45672
	Extracted first digit: 2
*/