/*****************************************************************
 * The program finds the smallest and the largest among a list   *
 * of integers when the size of the list is known.               *
 *****************************************************************/
#include <iostream>
#include <limits>        

using namespace std; 

int main ( )
{
	// Variable declaration
	int size;
	int number, smallest, largest;

	// Initialization
	smallest = numeric_limits <int> :: max();
	largest = numeric_limits <int> :: min() ;

	// Size Input
	do
	{
		cout << "Enter the size of the list (non-negative): ";
		cin >> size;
	} while (size <= 0);

	// Processing 
	for (int i = 1; i <= size; i++)
	{
		cout << "Enter the next item: "; 
		cin >> number;
		
		if (number < smallest)
		{
			smallest = number;
		} 
		
		if (number > largest)
		{
			largest = number;
		} 
	}

	// Result output
	cout << "The smallest item is: " << smallest << endl;
	cout << "The largest item is: " << largest << endl;

	return 0;
} 

/*
	Run:
	Enter the size of the list (non-negative): 6
	Enter the next item: 12
	Enter the next item: −3
	Enter the next item: 14
	Enter the next item: 15
	Enter the next item: 27
	Enter the next item: −7
	The smallest item is: −7
	The largest item is: 27

	Run:
	Enter the size of the list (non-negative): 3
	Enter the next item: 1
	Enter the next item: 87
	Enter the next item: 45
	The smallest item is: 1
	The largest item is: 87
*/