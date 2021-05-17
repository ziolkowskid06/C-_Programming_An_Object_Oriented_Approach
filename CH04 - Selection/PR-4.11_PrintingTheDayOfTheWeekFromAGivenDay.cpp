/***************************************************************
 * Use a swith statement with break to print the name of the   *
 * week day.                                                   *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Declaration
	int day;

	// Input
	cout << "Enter a number between 0 and 6: ";
	cin >> day; 

	// Switch statement (Decision and output)
	switch (day)
	{
		case 0: cout << "Sunday" << endl;
				cout << "First day of the week " << endl;
				break;
		case 1: cout << "Monday" << endl;
				break;
		case 2: cout << "Tuesday" << endl;
				break;
		case 3: cout << "Wednesday" << endl;
				break;
		case 4: cout << "Thursday" << endl;
				break;
		case 5: cout << "Friday" << endl;
				break;
		case 6: cout <<"Saturday" << endl;
				cout << "Last day of the week " << endl;
				break;  // This is not needed, but added for parallelism
	}

	return 0;
}

/*
	Run:
	Enter a number between 0 and 6: 0
	Sunday
	First day of the week
	
	Run:
	Enter a number between 0 and 6: 4
	Thursday
	
	Run:
	Enter a number between 0 and 6: 6
	Saturday
	Last day of the week
	
	Run:
	Enter a number between 0 and 6: 8
*/