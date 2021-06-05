/***************************************************************
 * A program to test shadowing of global scope                 *
 ***************************************************************/
#include <iostream>

using namespace std;

int num = 5;   // Global variable

int main()
{
	cout << num << endl;   // global num
	int num = 25;          // Local variable
	cout << num;           // local num shadows global num
	
	return 0;
} 

/*
	Run:
	5
	25
*/