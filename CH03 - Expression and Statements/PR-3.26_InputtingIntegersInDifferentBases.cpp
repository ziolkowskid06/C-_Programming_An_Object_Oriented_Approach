/***************************************************************
 * A program to input integer value in any base                *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ( )
{
	// Declaration
	int num1, num2, num3;

	// Input first number in decimal (no manipulator) 
	cout << "Enter the first number in decimal: "; 
	cin >> num1;

	// Input second number in octal
	cout << "Enter the second number in octal: "; 
	cin >> oct >> num2; 

	// Input second number in hexadecimal
	cout << "Enter the third number in hexadecimal: "; 
	cin >> hex >> num3;

	// Output values
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3;

	return 0;
}

/*
	Run:
	Enter the first number in decimal: 124
	Enter the second number in octal: 76
	Enter the third number in hexadecimal: 2ab
	124
	62
	683
*/