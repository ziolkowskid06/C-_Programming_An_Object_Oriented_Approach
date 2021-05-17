/***************************************************************
 * Finding the total value of a set of coins                    *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Defining constants
	const unsigned int pennyValue = 1;
	const unsigned int nickelValue = 5;
	const unsigned int dimeValue = 10;
	const unsigned int quarterValue = 25;
	const unsigned int dollarValue = 100;

	// Defining variables (number of each coin)  
	unsigned int pennies;
	unsigned int nickels;
	unsigned int dimes;
	unsigned int quarters;
	unsigned int dollars;

	// Defining total value
	unsigned long totalValue;

	// Inputting number of different coins
	cout << "Enter the number of pennies: ";
	cin >> pennies;
	cout << "Enter the number of nickels: ";
	cin >> nickels;
	cout << "Enter the number of dimes: ";
	cin >> dimes;
	cout << "Enter the number of quarters: ";
	cin >> quarters;
	cout << "Enter the number of dollars: ";
	cin >> dollars;

	// Calculating total value
	totalValue = pennies * pennyValue + nickels * nickelValue + 
	     dimes * dimeValue + quarters * quarterValue + dollars * dollarValue;
	     
	// Outputting result
	cout << "The total value is: " << totalValue << " pennies." ;
	return 0;
}

/*	
	Run:
	Enter the number of pennies: 20
	Enter the number of nickels: 5
	Enter the number of dimes: 10
	Enter the number of quarters: 4
	Enter the number of dollars: 6
	The total value is: 845 pennies.
*/