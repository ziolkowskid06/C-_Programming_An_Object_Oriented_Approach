/***************************************************************
 * Use a switch statement to find a pass/nopass grade.         *
 ***************************************************************/
#include <iostream>

using namespace std;

int main () 
{
	// Declaration
	char grade;
	
	// Input
	cout << "Enter a grade (A, B, C, D, F): ";
	cin >> grade; 
	
	// Decision section using switch statement
	switch (grade)
	{
		case 'A':
		case 'B':
		case 'C': cout << "Grade is pass";
				  break;
		case 'D':
		case 'F': cout << "Grade is nopass";
				  break;
		default: cout <<"Error in the input. Try again.";
	} 

	return 0;
}

/*
	Run:
	Enter a grade (A, B, C, D, F): A
	Grade is pass
	
	Run:
	Enter a grade (A, B, C, D, F): D
	Grade is nopass
	
	Run:
	Enter a grade (A, B, C, D, F): F
	Grade is nopass
	
	Run:
	Enter a grade (A, B, C, D, F): G
	Error in the input. Try again.
	
	Run:
	Enter a grade (A, B, C, D, F): B
	Grade is pass
	
	Run:
	Enter a grade (A, B, C, D, F): C
	Grade is pass
*/