/***************************************************************
 * Uses a conditional expression to print the larger of two    *
 * numbers or the first if the numbers are equal               *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Declaration
	int num1, num2;
	int larger;
	
	// Input
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	
	// Decision making
	larger = (num1 >= num2) ? num1 : num2; 
	
	// Output
	cout << "The larger is: " << larger; 
	
	return 0;
}

/*
	Run:
	Enter the first number: 40
	Enter the second number: 25
	The larger is: 40

	Run:
	Enter the first number: 22
	Enter the second number: 67
	The larger is: 67
*/