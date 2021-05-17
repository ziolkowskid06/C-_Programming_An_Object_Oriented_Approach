/***************************************************************
 * Use a for loop inside another loop to print a patterns of   *
 * digits horizontally and vertically                          *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ( )
{
	// Delcaration
	int rows;      // Number of rows
	int cols;      // Number of columns

	// Inputs
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> cols; 

	// Nested loops
	for (int i = 1; i <= rows; i++)
	{
		 for (int j = i; j <= i + cols -1; j++)
		{ 
			cout << j << " "; 
		}  
		cout << endl;
	}  

	return 0; 
}

/*
	Run:
	Enter the number of rows: 3
	Enter the number of columns: 6
	1 2 3 4 5 6
	2 3 4 5 6 7
	3 4 5 6 7 8

	Run:
	Enter the number of rows: 2
	Enter the number of columns: 8
	1 2 3 4 5 6 7 8  
	2 3 4 5 6 7 8 9  
*/