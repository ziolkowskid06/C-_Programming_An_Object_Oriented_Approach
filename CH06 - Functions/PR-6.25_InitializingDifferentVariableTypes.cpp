/***************************************************************
 * A program to test the initialization of variables           *
 ***************************************************************/
#include <iostream>

using namespace std;

int global;   // A global variable

int main()
{
	static int sLocal;   // A static local variable
	auto int aLocal;     // An automatic local variable
	
	// Printing values
	cout << "Global = " << global << endl;
	cout << "Static Local = " << sLocal << endl;
	cout << "Automatic Local = " << aLocal << endl;

	return 0;
}  

/*
	Run: 
	Global = 0
	Static Local = 0
	Automatic Local = 4202830   // Garbage value 
*/