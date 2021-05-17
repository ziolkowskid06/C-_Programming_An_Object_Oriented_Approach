/***************************************************************
 * Use a for loop inside another loop to print a patterns of   *
 * asterisks horizontally and vertically                       *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ( )
{
	// Declaration
	int rows;      // Number of rows
	int cols;      // Number of columns

	// Inputs
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> cols;

	// Output
	for (int count1 = 1; count1 <= rows; count1++)
	{
		for (int count2 = 1; count2 <= cols; count2++)
		{ 
			cout << "*";
		}  
		cout << endl;
	} 

	return 0;
}

/*
Run:
Enter the number of rows: 3
Enter the number of columns: 8
********
********
********

Run:
Enter the number of rows: 2
Enter the number of columns: 6
******
******
*/