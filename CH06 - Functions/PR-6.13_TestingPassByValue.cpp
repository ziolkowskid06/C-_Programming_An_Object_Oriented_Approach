/***************************************************************
 * This program shows how a change in the parameter cannot     *
 * affect the corresponding argument in pass-by-value.         *
 ***************************************************************/
#include <iostream>

using namespace std;

// Function declaration
void fun(int y);   

int main()
{
	// Declaration and initialization of an argument
	int x = 10;

	// Calling function fun and passing x as an argument
	fun(x);   
	
	// Printing the value of x to see no change
	cout << "Value of x in main: " << x << endl;
	
	return 0;
}


/****************************************************************
 * Fun is a function that receives the value of x by value and  *
 * stores it in parameter y. The locations x and y are two      *
 * independent memory locations. The value of y is incremented  *
 * in fun, but the value of x in main remains unchanged.        *
 ****************************************************************/
void fun(int y)    
{
	y++;
	cout << "Value of y in fun: " << y << endl;
	return;
}


/*
	Run:                  
	Value of y in fun: 11      // y in the called function is incremented.
	Value of x in main: 10     // x in the main is not affected.
*/