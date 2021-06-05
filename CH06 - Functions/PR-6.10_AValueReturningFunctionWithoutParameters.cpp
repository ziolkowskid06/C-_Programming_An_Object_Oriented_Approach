/*******************************************************************
 * This program shows how to define a function to get a positive   *
 * integer from the keyboard and print its right-most digit.       *
 *******************************************************************/
#include <iostream>

using namespace std;

/***************************************************************
 * The getdata function is a returning-value function with     *
 * no parameters. It takes the user input (side effect) from   *
 * the keyboard and returns the value to the main function     *
 * after validating that the number is positive.               *
 ***************************************************************/
int getData()
{
	int data;
	do
	{
		cout << "Enter a positive integer: ";
		cin >> data;
	} while (data <= 0);
	return data;
}

int main()
{
	int number = getData();     // Function call with no argument
	cout << "Right-most digit: " << number % 10; 

	return 0;
}

/*
	Run
	Enter a positive integer: 56
	Right-most digit: 6

	Run
	Enter a positive integer: -72
	Enter a positive integer: 72
	Right-most digit: 2
*/