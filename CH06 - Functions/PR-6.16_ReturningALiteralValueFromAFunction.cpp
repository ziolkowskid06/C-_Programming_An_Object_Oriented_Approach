/******************************************************************
 * This program shows how we can return a value from a function.  *
 ******************************************************************/
#include <iostream>

using namespace std;

// Function declaration
bool isEven(int y);

int main( )
{
	// Function call
	cout << boolalpha << isEven(5) << endl;
	cout << boolalpha << isEven(10);
	return 0;
} 


/********************************************************************
 * The isEven function takes one parameter y. It then checks to     *
 * see if the value of y is even by getting the remainder of y.     *
 * The function then returns the result by value (literal value).   *
 ********************************************************************/
bool isEven(int y)
{
	return((y % 2) == 0);
} 


/*
	Run:   
	false
	true
*/