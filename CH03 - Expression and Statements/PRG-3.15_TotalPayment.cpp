/*************************************************************************************
 * An hourly employee is paid regular pay per hour for 40 hours a week. She          *
 * will be paid 60 percent more for every hour she works over 40 hours. Write a      *
 * program that asks an employee to enter the number of extra hours worked last      *
 * week and the weekly rate and then calculates and prints total payment.            *
 *************************************************************************************/
#include <iostream>

using namespace std;

int main()
{
	// Varialbe declaration
	int extraHours; 
	double weeklyRate, hourRate, extraHourRate;

	// Input
	cout << "Enter extra hours: ";
	cin >> extraHours;
	cout << "Enter weekly rate: ";
	cin >> weeklyRate ;

	// Processing
	hourRate = weeklyRate / 40;
	extraHourRate = hourRate * 1.6;

	// Output
	cout << "\nHour rate: " << hourRate << " $"<< endl;
	cout << "Extra hour rate: " << extraHourRate << " $" << endl;
	cout << "Total payment: " << weeklyRate + extraHours*extraHourRate << " $";
	
	return 0;
}

/*
	Run:
	Enter extra hours: 5
	Enter weekly rate: 500

	Hour rate: 12.5 $
	Extra hour rate: 20 $
	Total payment: 600 $
*/