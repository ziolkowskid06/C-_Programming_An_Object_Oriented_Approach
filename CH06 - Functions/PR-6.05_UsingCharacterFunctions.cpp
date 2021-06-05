/******************************************************************
 * A program that changes every lowercase letter to an uppercase  *
 * letter and counts the alphabetic characters.                   *
 ******************************************************************/
#include <iostream>
#include <cctype>

using namespace std;

int main ( )
{
	// Declaration
	char ch;
	int count = 0;

	// Inputting characters and processing
	while (cin >> noskipws >> ch)
	{
		if (isalpha (ch))
		{
			count++;
		}
		ch = toupper (ch);
		cout << ch ;
	}

	// Printing the count of characters
	cout << "The count of alphabetic characters is: " << count; 

	return 0;      
}

/*
	Run:
	This is a line made of more than 10 characters.
	THIS IS A LINE MADE OF MORE THAN 10 CHARACTERS.
	^Z
	The count of alphabetic characters is: 35
*/