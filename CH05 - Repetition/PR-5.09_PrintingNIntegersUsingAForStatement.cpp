/***************************************************************
 * Use of a for loop to print n integers                       *
 ***************************************************************/
#include <iostream>

using namespace std;

int main () 
{
	// Declaration
	int n;   

	// Get the value of n
	cout << "Enter the number of integers to print: ";
	cin >> n;

	// Loop
	for (int counter = 0; counter < n; counter++)   
	{
		cout << counter << " "; 
	}
	
	return 0; 
}

/*
	Run:
	Enter the number of integers to print: 5
	0 1 2 3 4 
	
	Run:
	Enter the number of integers to print: 3
	0 1 2
*/