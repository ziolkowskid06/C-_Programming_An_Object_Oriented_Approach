/***************************************************************
 * Use of the EOF-controlled while loop to find the sum        *
 * of some numbers entered on the keyboard                     *
 ***************************************************************/
#include <iostream>

using namespace std;

int main () 
{
	// Declaration
	int sum = 0;
	int num;

	// Loop including initialization 
	cout << "Enter the first integer (EOF to stop): ";
	while (cin >> num)
	{
		sum = sum + num;
		cout << "Enter the next integer: ";   // update
	}

	// Output
	cout << "The sum is: " << sum;

	return 0; 
}

/*
	Run:
	Enter the first integer:  24
	Enter the next integer: 12
	Enter the next integer: 123
	Enter the next integer: 14
	Enter the next integer: ^Z
	The sum is: 173
*/