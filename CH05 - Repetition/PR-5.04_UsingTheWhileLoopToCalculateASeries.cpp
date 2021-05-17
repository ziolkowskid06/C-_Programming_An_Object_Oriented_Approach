/******************************************************************
 * Use of a while statement to calculate the sum of three series  *
 ******************************************************************/
#include <iostream>

using namespace std;

int main () 
{
	// Declaration and initialization 
	int sum1 = 0, sum2 = 0, sum3 = 0;
	int n;

	// Input value of n (limit)
	cout << "Enter the value of n: ";
	cin >> n;

	// The while statement
	int counter = 1;       						// Initialize counter
	while (counter <= n) 
	{
		sum1 += counter;
		sum2 += counter * counter;
		sum3 += counter * counter * counter; 
		counter++;  							// Update counter  
	}

	// Printing results
	cout << "Value of n: " << n << endl;
	cout << "Value of sum1: " << sum1 << endl;
	cout << "Value of sum2: " << sum2 << endl;
	cout << "Value of sum3: " << sum3 << endl;

	return 0; 
}

/*
	Run:
	Enter the value of n: 5
	Value of n: 5
	Value of sum1: 15
	Value of sum2: 55
	Value of sum3: 225 

	Run:
	Enter the value of n: 15
	Value of n: 15
	Value of sum1: 120
	Value of sum2: 1240
	Value of sum3: 14400 
*/