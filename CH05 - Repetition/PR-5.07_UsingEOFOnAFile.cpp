/***************************************************************
 * Use of the EOF-controlled while loop to find the sum        *
 * of some numbers stored in a file                            *
 ***************************************************************/
#include <iostream>
#include <fstream>

using namespace std;

int main () 
{
	// Declarations
	int sum = 0;
	int num;
	ifstream infile;

	// Openning file
	infile.open("numbers.dat");

	// While loop   
	while (infile >> num)
	{
		sum = sum + num;
	}

	// Output result
	cout << "The sum is: " << sum;
	infile.close();

	return 0; 
}

/*
	Run:
	The sum is: 1055
*/