/***************************************************************
 * Use of an if-else statement to find a pass/no-pass grade    *
 ***************************************************************/
#include <iostream>

using namespace std;

int main () 
{
	// Local Declaration
	int score;

	// Input
	cout << "Enter a score between 0 and 100: ";
	cin >> score;

	// Decision
	if (score  >= 70)
	{
		cout << "Grade is pass" << endl;
	} 
	else 
	{
		cout << "Grade is nopass" << endl;
	} 

	return 0;
}

/*
	Run:
	Enter a score between 0 and 100: 65
	Grade is nopass.

	Run:
	Enter a score between 0 and 100: 92
	Grade is pass.
*/