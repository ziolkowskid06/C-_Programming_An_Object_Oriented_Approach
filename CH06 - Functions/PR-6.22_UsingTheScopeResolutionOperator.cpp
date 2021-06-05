/***************************************************************
 * A program to test the use of scope operator                 *
 ***************************************************************/
#include <iostream>

using namespace std;

int num = 5;  // A global variable

int main()
{
	int num = 25;  // A local variable
	cout <<" Value of Global num: " << ::num << endl; 
	cout <<" Value of Local num: " << num << endl;

	return 0;
} 


/*
	Run:
	Value of Global num: 5
	Value of Local num: 25
*/