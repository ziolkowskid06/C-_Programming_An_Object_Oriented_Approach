/********************************************************************
 * This program shows how a change in the parameter can change the  *
 * corresponding argument when data is passed by reference.         *
 ********************************************************************/
#include <iostream>

using namespace std;

// Function declaration;
void fun(int&  y);      // The ampersand tell us that y is an alliance

int main ()
{
	// Declaration and initialization of an argument
	int x = 10;

	// Calling function fun and passing x as an argument
	fun(x);   

	// Printing the value of x to see change
	cout << "Value of x in main: " << x << endl;

	return 0;
}


/***********************************************************************
 * Fun is a function that receives the value of y by reference,        *
 * which means the parameter y is an alias for the argument x in       *
 * the function call. This function increments its parameters, which   *
 * results in incrementing the argument in main.                       *
 ***********************************************************************/
void fun(int&  y)
{
	y++;
	cout << "Value of y in fun: " << y << endl;
	return;
}


/*
	Run:
	Value of y in fun: 11
	Value of x in main: 11          // Change of y in fun, has changed x in main
*/