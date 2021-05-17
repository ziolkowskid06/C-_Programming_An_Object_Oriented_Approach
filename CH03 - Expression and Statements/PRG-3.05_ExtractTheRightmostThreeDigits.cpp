/***************************************************************
 * Write a program that individually extracts the rightmost    * 
 * three digits of an input data of type int.                  *
 ***************************************************************/
#include <iostream>

using namespace std;

int main()
{
	// Variable declaration
	unsigned int input, firstDigit, secondDigit, thirdDigit;
	
	// Prompt and Input
	cout << "Enter the number: ";
	cin >> input;

	// Processing
	firstDigit = input % 10;
	secondDigit = (input/10) % 10;
	thirdDigit = (input/100) % 10;

	// Output
	cout << "\nValue entered: " << input << endl;
	cout << "First digit: " << firstDigit << endl;
	cout << "Second digit: " << secondDigit << endl;
	cout << "Third digit: " << thirdDigit << endl << endl;
	cout << "Rightmost three digits: " << thirdDigit*100 + secondDigit*10 + firstDigit;

	return 0;
}

/* 
	Enter the number: 67890

	Value entered: 67890
	First digit: 0
	Second digit: 9
	Third digit: 8

	Rightmost three digits: 890
*/
