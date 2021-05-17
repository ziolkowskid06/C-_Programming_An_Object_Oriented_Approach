/*******************************************************************
 * This program prints the full name of a person given the first,  *
 * the middle, and the last name.                                  *
 *******************************************************************/
#include <iostream>
#include <string>  // Need to use the string class

using namespace std;

int main ()
{
	// Defining variables
	string first;
	string initial;
	string last;
	string space = " ";
	string dot = ".";
	string fullName;
	
	// Input data for first name, initial, and last name 
	cout << "Enter the first name: ";
	cin >> first;
	cout << "Enter the initial: ";
	cin >> initial;
	cout << "Enter the last name: ";
	cin >> last;
	
	// Formation of full name using concatenation operator 
	fullName = first + space + initial + dot + space + last;
	
	// Outputting full name 
	cout << "The full name is: " << fullName; 
	return 0;
}

/*
	Run:
	Enter the first name: John
	Enter the initial: A
	Enter the last name: Brown
	The full name is: John A. Brown
*/