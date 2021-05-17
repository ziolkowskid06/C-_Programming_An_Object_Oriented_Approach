/***************************************************************
 * Use a swith statement to print a grade from a given score.  *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Declaration
	int score;
	char grade;

	// Input
	cout << "Enter a score between 0 and 100: ";
	cin >> score;

	// Decision making using switch statement
	switch (score / 10)
	{
		case 10: grade = 'A';
				 break;
		case 9 : grade = 'A';
				 break;
		case 8 : grade = 'B';
				 break;
		case 7 : grade = 'C';
				 break;
		case 6 : grade = 'D';
			  	 break;
		default: grade = 'F';
	} 

	// Output 
	cout << "Score: " << score << endl;
	cout << "Grade: " << grade << endl;

	return 0;
}

/*
	Run:
	Enter a score between 0 and 100: 71
	Score: 71
	Grade: C

	Run:
	Enter a score between 0 and 100: 93
	Score: 93
	Grade: A

	Run:
	Enter a score between 0 and 100: 24
	Score: 24
	Grade: F
*/