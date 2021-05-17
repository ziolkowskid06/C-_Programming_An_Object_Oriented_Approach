/***************************************************************
 * Find a grade given a score using the multi-way selection    * 
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Declaration
	int score;
	char grade;

	// Get Input
	cout << "Enter a score between 0 and 100: ";
	cin >> score;

	// Multi-way decision using if-else 
	if (score >= 90)
	{
		grade = 'A';
	}
	else if (score >= 80)
	{
		grade = 'B';
	}
	else if (score >= 70)
	{
		grade = 'C';
	}
	else if (score >= 60)
	{
		grade = 'D';
	}
	else 
	{
		grade = 'F';
	}

	// Output
	cout << "The grade is: " << grade; 

	return 0; 
} 

/*
	Run:
	Enter a score between 0 and 100: 83
	The grade is B  

	Run:
	Enter a score between 0 and 100: 60
	The grade is D 

	Run:
	Enter a score between 0 and 100: 95
	The grade is A
*/