/***************************************************************
 * Use of the sentinel-controlled while loop to find the sum   *
 * of some numbers                                             *
 ***************************************************************/
#include <iostream>

using namespace std;

int main () 
{
	// Declaration
	int sum = 0;
	int num;
	
	// Loop including the first input
	cout << "Enter an integer (-1 to stop): ";
	cin >> num;
	while (num != -1)
	{
		sum = sum + num;
		cout << "Enter an integer (-1 to stop): "; 
		cin >> num ;     // Sentinel update
	} 
	
	// Outputting result
	cout << "The sum is: " << sum;
	
	return 0;
} 

/*
	Run:
	Enter an integer (-1 to stop): 25
	Enter an integer (-1 to stop): 22
	Enter an integer (-1 to stop): 12
	Enter an integer (-1 to stop): 67
	Enter an integer (-1 to stop): -1
	The sum is: 126
*/