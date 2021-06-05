/***************************************************************
 * This program finds the roots of the quadratic equations     *
 ***************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main ( )
{
	// Declaration of variables
	int a, b, c;
	double term;
	
	// Inputting the value of three coefficients  
	cout << "Enter the value of coefficient a: ";
	cin >> a;
	cout << "Enter the value of coefficient b: ";
	cin >> b;
	cout << "Enter the value of coefficient c: ";
	cin >> c;
	
	// Calculating the value of term (b 2  − 4ac)
	term = pow (b, 2) - 4 * a * c;
	if (term < 0 ) 
	{
		cout << "There is no root!" << endl;
	}
	else if (term == 0)
	{
		cout << "The two roots are equal." << endl;
		cout << "x1 = x2 = " << -b / (2 * a) << endl;
	}
	else
	{
		cout << "There are two distinct roots: " << endl;
		cout << "x1 = " << (-b + sqrt (term)) / (2 * a) << endl;
		cout << "x2 = " << (-b - sqrt (term )) / (2 * a) << endl;
	}
	
	return 0;      
} 

/*
	Run:
	Enter the value of coefficient a: 3
	Enter the value of coefficient b: 5
	Enter the value of coefficient c: 4
	There is no root!

	Run:
	Enter the value of coefficient a: 1
	Enter the value of coefficient b: 2
	Enter the value of coefficient c: 1
	The two roots are equal.
	x1 = x2 = -1

	Run:
	Enter the value of coefficient a: 4
	Enter the value of coefficient b: -9
	Enter the value of coefficient c: 2
	There are two distinct roots:
	x1 = 2
	x2 = 0.25
*/