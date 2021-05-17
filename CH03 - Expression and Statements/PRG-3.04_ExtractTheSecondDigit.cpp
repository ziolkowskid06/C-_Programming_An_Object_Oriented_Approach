/***************************************************************
 * Write a program that extracts and prints the second digit   *
 * of an input data of type int.                               *
 ***************************************************************/
#include <iostream>

using namespace std;

int main()
{
	// Variable declaration
	unsigned int input, secondDigit;
	
	// Prompt and Input
	cout << "Enter the number: ";
	cin >> input;

	// Processing
	secondDigit =  (input/10) % 10;

	// Output
	cout << "\nValue entered: " << input << endl;
	cout << "Second digit: " << secondDigit;

	return 0;
}

/* 
	Run:
	Enter the number: 12345

	Value entered: 12345
	Second digit: 4
*/
