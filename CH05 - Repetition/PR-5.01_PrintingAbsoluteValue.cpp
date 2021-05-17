/***************************************************************
 * Use of a while statement to print a message 10 times        *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ( )
{
	// Declaration and initialization of counter
	int counter = 0;

	// While statement 
	while (counter < 10)      // The number of repetition is fixed to 10
	{
		cout << "Hello world!" << endl;
		counter++;
	}

	return 0;      
} 

/*
	Run:
	Hello world!
	Hello world!
	Hello world!
	Hello world!
	Hello world!
	Hello world!
	Hello world!
	Hello world!
	Hello world!
	Hello world!
*/