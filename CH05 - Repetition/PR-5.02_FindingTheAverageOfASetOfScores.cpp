/******************************************************************
 * Use of the counter-controlled while loop to find the average   *
 * of scores for each student.                                    *
 ******************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main () 
{
	// Declaration
	int score;
	int sum = 0;
	double average; 

	// Loop
	int counter = 0;  // initialize the counter
	while (counter < 4)   // Test the counter
	{
		// Process (Read and add score to the sum)
		cout << "Enter the next score (between 0 and 100): ";
		cin >> score;
		sum = sum + score;
		counter++;   // Increment the counter
	} 

	// Result 
	average = static_cast <double> (sum) / 4;
	cout << fixed << setprecision (2) << showpoint;
	cout << "The average of scores is: " << average;

	return 0; 
}

/*
	Run:
	Enter the next score (between 0 and 100): 78
	Enter the next score (between 0 and 100): 68
	Enter the next score (between 0 and 100): 92
	Enter the next score (between 0 and 100): 88
	The average of scores is: 81.50

	Run:
	Enter the next score (between 0 and 100): 80
	Enter the next score (between 0 and 100): 90
	Enter the next score (between 0 and 100): 76
	Enter the next score (between 0 and 100): 74
	The average of scores is: 80.00
*/