/***************************************************************
 * Testing some compound-assignment expressions                *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Declaration of five variables
	int x = 20;
	int y = 30;
	int z = 40; 
	int t = 50;
	int u = 60;

	// Use compound assignments
	x += 5;
	y -= 3;
	z *= 10;
	t /= 8;
	u %= 7;

	// Output results
	cout << "Value of x: " << x << endl;
	cout << "Value of y: " << y << endl;
	cout << "Value of z: " << z << endl;
	cout << "Value of t: " << t << endl;
	cout << "Value of u: " << u;

	return 0;
}

/*
	Run:
	Value of x: 25
	Value of y: 27
	Value of z: 400
	Value of t: 6
	Value of u: 4
*/