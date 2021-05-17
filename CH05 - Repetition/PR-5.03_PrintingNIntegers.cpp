/****************************************************************
 * Use of a while statement loop to print integers from 0 to n  *
 ****************************************************************/
#include <iostream>

using namespace std;

int main () 
{
	// Declaration of the limit and counter
	int n, count;   
	
	// Input the value of n (limit)
	cout << "Enter the number of integers to print: ";
	cin >> n;
	
	// Printing integers
	count = 0;
	while (count < n)   
	{
		cout << count << endl;  
		count++; 
	}
	
	return 0; 
}

/*
	Run:
	Enter the number of integers to print: 5
	0
	1
	2
	3
	4 

	Run:
	Enter the number of integers to print: 0  

	Run:
	Enter the number of integers to print: −3
*/