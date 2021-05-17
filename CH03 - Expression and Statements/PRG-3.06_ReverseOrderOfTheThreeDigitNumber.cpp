/*****************************************************************
 * Write a program that, given a three-digit integer, constructs *
 * and prints another integer whose digits are in the reverse    *
 * order of the given one.                                       *
 *****************************************************************/
#include <iostream>

using namespace std;

int main()
{
	// Variable declaration
	int input, firstDigit, secondDigit, thirdDigit, reverseInput;

	// Prompt and Input
	cout << "Enter three-digits number: ";
	cin >> input;

	// Processing
    firstDigit = input % 10;
	secondDigit = (input/10) % 10;
	thirdDigit = (input/100) % 10;
	reverseInput = firstDigit*100 + secondDigit*10 + thirdDigit;

	// Output
	cout << "Value entered: " << input << endl;
	cout << "Reverse order: " << reverseInput;

	return 0;
}

/*
Run:
Enter three-digits number: 678
Value entered: 678
Reverse order: 876
*/