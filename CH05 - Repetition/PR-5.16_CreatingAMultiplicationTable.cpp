/*****************************************************************
 * Use a for loop inside another loop to print a multiplication  *
 * table of size 2 to 10.                                        *
 *****************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main () 
{
	// Declaration of size
	int size;

	// Input and validation
	do
	{
		cout << "Enter table size (2 to 10): ";
		cin >> size;
	} while (size < 2 || size > 10); 

	// Printing the table (nested loops)
	for (int i = 1 ; i <= size; i++)
	{
		for (int j = 1 ; j <= size ; j++)
		{
			cout << setw (4) << i * j;
		}
		cout << endl;
	}

	return 0;
}

/*
	Run:
	Enter table size (2 to 10): 4
	  1  2   3   4
	  2  4   6   8
	  3  6   9  12
	  4  8  12  16
*/