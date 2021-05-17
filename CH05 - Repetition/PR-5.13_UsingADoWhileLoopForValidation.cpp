/***************************************************************
 * Demonstrate the use of the do-while loop to validate data   *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ( )
{
	// Declaration
	int score;
	char grade;

	// Input validation loop
	do
	{
		cout << "Enter a score between 0 and 100: ";
		cin >> score;
	} while (score < 0 || score > 100); 

	// Decision    
	switch (score / 10)
	{
		case 10: grade = 'A';
				 break;
		case 9: grade = 'A';
				break;
		case 8: grade = 'B';
				break;
		case 7: grade = 'C';
				break;
		case 6: grade = 'D';
				break;
		default: grade = 'F'; 
	} 

	// Output 
	cout <<  "The grade is " << grade <<  endl; 

	return 0; 
} 

/*
	Run:
	Enter a score between 0 and 100: 83
	The grade is B

	Run:
	Enter a score between 0 and 100: 111
	Enter a score between 0 and 100: 97
	The grade is A
*/