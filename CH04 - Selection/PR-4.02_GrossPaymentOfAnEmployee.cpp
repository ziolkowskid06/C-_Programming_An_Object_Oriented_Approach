/***************************************************************
 * Use of if-statement to find gross payment of an employee    *
 ***************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	// Declaration;
	double hours;
	double rate;
	double regularPay;
	double overPay;
	double totalPay;

	// Input
	cout << "Enter hours worked: ";
	cin >> hours;
	cout << "Enter pay rate: ";
	cin >> rate;

	// Calculation that does not depend on decision 
	regularPay = hours * rate;
	overPay = 0.0;

	// Calculation that is skipped if hours worked is not more than 40
	if (hours > 40.0)
	{
		overPay = (hours - 40.0) * rate * 0.30;
	} 

	// Rest of the calculation
	totalPay = regularPay + overPay; 

	// Printing output
	cout << fixed << showpoint;  
	cout << "Regular pay  = " << setprecision (2) << regularPay << endl;
	cout << "Over time pay = " << setprecision (2) <<  overPay << endl;
	cout << "Total pay = " << setprecision (2) << totalPay << endl; 

	return 0;
}

/*
	Run:
	Enter hours worked: 30
	Enter pay rate: 22.00
	Regular pay = 660.00
	Over time pay = 0.00
	Total pay = 660.00

	Run:
	Enter hours worked: 45
	Enter pay rate: 25.00
	Regular pay = 1125.00
	Over time pay =  37.50
	Total pay = 1162.50
*/