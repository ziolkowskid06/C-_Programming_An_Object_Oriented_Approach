/*****************************************************************
 * It shows how to add and multiply a list of integers when the  *
 * size of the list is predefined                                *
 *****************************************************************/
#include <iostream>
#include <iomanip>

using namespace std; 

int main ( )
{
	// Variable declaration
	int size;
	long double number;
	long double sum, product;

	// input validation for the size
	do 
	{
		cout << "Enter a non-negative integer value for size: ";
		cin >> size;
	} while (size < 0);

	// Initialization
	sum = 0; 
	product = 1; 

	// Processing
	for (int i = 1; i <= size; i++)
	{
		cout << "Enter the next number: ";
		cin >> number; 
		sum += number;
		product *= number;
	}

	// Output
	cout << fixed << setprecision (2);
	cout << "sum =  " << sum << endl; 
	cout << "product =  " << product; 

	return 0;  
}

/*
	Run:
	Enter a non-negative integer value for size: 6
	Enter the next number: 12
	Enter the next number: 13.45
	Enter the next number: 15
	Enter the next number: 22.10
	Enter the next number: 11.34
	Enter the next number: 14
	sum = 87.89
	product = 8494310.92
*/