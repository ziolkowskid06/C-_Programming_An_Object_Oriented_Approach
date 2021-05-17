/***************************************************************
 * Testing some simple assignment expressions                  *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Variable Declaration 
	int x;
	int y; 

	// First assignment
	cout << "Return value of assignment expression: " << (x = 14) << endl; 
	cout << "Value of variable x: " << x << endl;

	// Second assignment
	cout << "Return value of assignment expression: " << (y = 87) << endl; 
	cout << "Value of variable y: " << y;

	return 0;
}

/*
	Run:
	Return value of assignment expression: 14
	Value of variable x: 14
	Return value of assignment expression: 87
	Value of variable y: 87
*/