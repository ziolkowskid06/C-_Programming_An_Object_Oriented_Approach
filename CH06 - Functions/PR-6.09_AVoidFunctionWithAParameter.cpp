/******************************************************************
 * This program shows how we can create different patterns using  *
 * a void function with a parameter.                              *
 ******************************************************************/
#include <iostream>

using namespace std;

/******************************************************************
 * Function definition for the pattern function. This is a void   *
 * function with one parameter that accepts its size from the     *
 * user each time the program is called. The parameter is used    *
 * to create a different size for the pattern.                    *
 ******************************************************************/
void pattern(int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "*" ;
		}
		cout << endl;
	}
	return;
} 

int main()
{
	// Declaration
	int patternSize;    // Argument to be pass to the square function
	
	// Input validation
	do 
	{
		cout << "Enter the size of the pattern: ";
		cin >> patternSize;
	} while (patternSize <= 0);
	
	// Function call
	pattern(patternSize);  // patternSize is the argument 
	
	return 0;
}
/*
	Run
	Enter the size of the pattern: 3
	***
	***
	***
	
	Run
	Enter the size of the pattern: 4
	****
	****
	****
	****
*/