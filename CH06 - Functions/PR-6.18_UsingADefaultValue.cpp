/***************************************************************
 * This program shows how we use the default parameter value.  *
 ***************************************************************/
#include <iostream>

using namespace std;

// Declaration:  the second parameter uses a default value of 40
double calcEarnings(double rate, double hours = 40); 

int main()
{
	// The first function call uses the default value
	cout << "Emplyee 1 pay: " << calcEarnings(22.0) << endl;
	cout << "Emplyee 2 pay: " << calcEarnings(12.50, 18);
	
	return 0;
 }


/*****************************************************************
 * The function definition has two parameters, but we do not     *
 * have to show the default parameter in the defintion because   *
 * it is the declaration that contains the default value.        *
 *****************************************************************/
double calcEarnings(double rate, double hours) 
{
	double pay;
	pay = hours * rate;
	return pay;
} // End of calcEarnings


/*
	Run:   
	Emplyee 1 pay: 880
	Emplyee 2 pay: 225
*/