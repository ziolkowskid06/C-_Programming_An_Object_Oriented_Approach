/***************************************************************
 * A program to find the size of all three integer types       *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	cout << "Size of short int is " << sizeof (short int) << " bytes." << endl;
	cout << "Size of int is " << sizeof (int) << " bytes." << endl;
	cout << "Size of long int is " << sizeof (long int) << " bytes." << endl;
	return 0;
}

/*
	Run:
	Size of short int: 2 bytes.
	Size of int: 4 bytes.
	Size of long int: 4 bytes.
*/