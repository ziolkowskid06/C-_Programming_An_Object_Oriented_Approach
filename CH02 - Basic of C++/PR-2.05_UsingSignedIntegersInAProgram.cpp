/***************************************************************
 * Finding the balance of an account after three transactions  *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Definition of variables
	int balance = 0;
	int transaction;

	// Inputting first transaction and adjusting the balance
	cout << "Enter the value of the first transaction: ";
	cin >> transaction;
	balance = balance + transaction;

	// Inputting second transaction and adjusting the balance
	cout << "Enter the value of the second transaction: ";
	cin >> transaction;
	balance = balance + transaction;

	// Inputting third transaction and adjusting the balance
	cout << "Enter the value of the third transaction: ";
	cin >> transaction;
	balance = balance + transaction;

	// Outputting the final balance
	cout << "The total balance is: " << balance << " dollars. "; 
	return 0;
}

/*
	Run:
	Enter the value of the first transaction: 70
	Enter the value of the second transaction: −50
	Enter the value of the third transaction: 35
	The total balance in your account is: 55 dollars.
*/