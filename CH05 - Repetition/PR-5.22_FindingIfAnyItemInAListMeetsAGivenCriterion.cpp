/***************************************************************
 * The program search a list of item to find if any item is    *
 * divisible by 7.                                             *
 ***************************************************************/
#include <iostream>

using namespace std; 
int main ( )
{
	// Declaration
	bool success;
	int size;
	int item;

	// Input Validation
	do 
	{
		cout << "Enter the number of items in the list: ";
		cin >> size;
	} while (size < 0);

	// Processing
	for (int i = 0; (i < size ) && (!success); i++)
	{
		cout << "Enter the next item: ";
		cin >> item; 
		success = (item %7 == 0);
	}  

	// Checking success or failure
	if (success)
	{
		cout << "The number " << item <<  " is divisible by 7." << endl;
	}
	else
	{
		cout << "None of the numbers is divisible by 7." << endl;
	}
	
	return 0;
}

/*
	Run:
	Enter the number of items in the list: 5
	Enter the next item: 12
	Enter the next item: 32
	Enter the next item: 28
	The number 28 is divisible by 7.

	Run:
	Enter the number of items in the list: 5
	Enter the next item: 6
	Enter the next item: 12
	Enter the next item: 15
	Enter the next item: 17
	Enter the next item: 22
	None of the numbers is divisible by 7.
*/