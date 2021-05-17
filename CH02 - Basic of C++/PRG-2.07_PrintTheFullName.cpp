/*************************************************************************************
 * Write a program that, using a C++ string, prints your name in the format shown    * 
 * below after being prompted to input your first and the last name.                 *
 *************************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName, lastName;

	// Ask for data
	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "Enter your last name: ";
	cin >> lastName;

	// Print the full name
	cout << "\nYour full name is: " << firstName << ", " << lastName;

	return 0;
}