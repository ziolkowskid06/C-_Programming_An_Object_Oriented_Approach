/***************************************************************
 * Using some special characters in strings                    *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	cout << "Hello\n";
	cout << "Hi\t friends." << endl;
	cout << "Buenos dias  \bamigos." << endl;  // two space after dias 
	cout << "Hello\rBonjour mes amis." << endl;
	cout << "This is a single quote\'." << endl;
	cout << "This is a double quote\"." <<endl;
	cout << "This is how to print a backslash \\."; 
	return 0;
}

/*
	Run:
	Hello     // \n has the same effect as endl
	Hi	  friends.     // effect of tab 
	Buenos dias amigos.    // \b deletes the previous character (one of the spaces)
	Bonjour mes amis.          //\r moves control to beginning of line (Hello will be gone) 
	This is a single quote'.     // A single quote is displayed
	This is a double quote".   // A double quote is displayed
	This is how to a print backslash \. // A backslash is displayed
*/