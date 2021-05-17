/***************************************************************
 * Find age eligibility to rent a car                          * 
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Declaration of variables 
	int age;
	bool eligible;
	
	// Getting input 
	cout << "Enter your age: "; 
	cin >>  age; 
	
	// Setting the condition
	eligible = (age >=25) && (age <= 100);
	
	// Testing the condition and output
	if (eligible)
	{
		cout << "You are eligible to rent a car.";
	}
	else
	{
		cout << "Sorry! You are not eligible to rent a car.";
	}
	return 0;
}

/*
	Run:
	Enter your age: 27
	You are eligible to rent a car.

	Run:
	Enter your age: 54
	You are eligible to rent a car.

	Run:
	Enter your age: 103
	Sorry! You are not eligible to rent a car.

	Run:
	Enter your age: 21
	Sorry! You are not eligible to rent a car.
*/