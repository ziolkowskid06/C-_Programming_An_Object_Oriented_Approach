/***************************************************************
 * Evaluating a simple expression with side effect             *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ( )
{
	// Declaration and initialization
	int x = 8;
	int y = 10;

	// Assignment 
	y *= x + 5;

	// Outputting value of variable y 
	cout << "Value of y: " << y ;
	return 0;
}

/*
	Run:
	Value of y: 130
*/