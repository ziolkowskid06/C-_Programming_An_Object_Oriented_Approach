/*****************************************************************
 * Use a switch statement to print the days of the weeks from a  *
 * specific day to the end of the week.                          *
 *****************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Declaration
	int day;

	// Input
	cout << "Enter a number between 0 and 6: ";
	cin >> day; 

	// Switch statement (decision and output)
	switch (day)
	{
		case 0: cout << "Sunday" << endl;
		case 1: cout << "Monday" << endl;
		case 2: cout << "Tuesday" << endl;
		case 3: cout << "Wednesday" << endl;
		case 4: cout << "Thursday" << endl;
		case 5: cout << "Friday" << endl;
		case 6: cout <<"Saturday" << endl;
	} 

	return 0;
}

/*
	Run:
	Enter a number between 0 and 6: 2
	Tuesday
	Wednesday
	Thursday
	Friday
	Saturday

	Run:
	Enter a number between 1 and 6: 4
	Thursday
	Friday
	Saturday

	Run:
	Enter a number between 1 and 6: 6
	Saturday

	Run:
	Enter a number between 1 and 6: 8
*/