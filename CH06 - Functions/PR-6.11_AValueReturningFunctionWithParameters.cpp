/***************************************************************
 * This program shows how to define a function to find the     *
 * larger of any two positive integers given by the user.      *
 ***************************************************************/
#include <iostream>

using namespace std;

/****************************************************************
 * The larger function is a value-returning function with two   *
 * parameters that gets two values from the calling function    *
 * and returns the larger one. The function has no side effect. *
 ****************************************************************/
int larger (int fst, int snd)
{
	int max;
	if (fst > snd)
	{
		max = fst;
	}
	else
	{
		max = snd;
	}
	return max;
} 

int main()
{
	// Declaration
	int first, second; 
	
	// Get inputs
	cout << "Enter the first number: "; 
	cin >> first;
	cout << "Enter the second number: "; 
	cin >> second;
	
	// Function call
	cout << "Larger: " << larger (first, second);  // Function call
	
	return 0;
}

/*
	Run
	Enter the first number: 56
	Enter the second number: 71
	Larger: 71

	Run
	Enter the first number: -10
	Enter the second number: 8
	Larger: 8
*/