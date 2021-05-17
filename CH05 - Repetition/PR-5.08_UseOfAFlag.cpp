/***************************************************************
 * Use of both EOF and a flag to terminate a loop              *
 ***************************************************************/
#include <iostream>
#include <fstream>

using namespace std;

int main () 
{
	// Declarations 
	ifstream infile;
	int num;
	bool flag;

	// Open file  
	infile.open("numbers.dat");

	// Loop to find a number greater than 150
	flag = false;
	while (infile >> num && !flag )
	{
		if (num >= 150)
		{
			cout << "The number is: " << num;
			flag = true;
		}
	}

	// Check flag
	if (!flag)
	{
		cout << "The number was not found!";
	}
	
	infile.close();

	return 0; 
}

/*
	Run:
	The number is: 170
*/