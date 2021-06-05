/*****************************************************************
 * This program shows how pass-by-reference can swap two values  *
 * in the calling function.                                      *
 *****************************************************************/
#include <iostream>
using namespace std;

void swap(int& first, int& second);   // Function declaration

int main( )
{
	// Declaration
	int first = 10;
	int second = 20;
	swap(first, second);  // Function call
	
	// Printing to test swapping    
	cout << "Value of first in main: " << first << endl;
	cout << "Value of second in main: " << second; 
	return 0;
} 


/*****************************************************************
 * The swap function takes two parameters as pass-by-reference.  *
 * It then swaps the values of fst and snd using a temporary     *
 * variable named temp. Since the data are passed by reference,  *
 * changing the parameters in the swap means changing values in  *
 * the arguments (first and second in main).                     *
 *****************************************************************/
void swap(int& fst, int& snd)
{
	int temp = fst;
	fst = snd;
	snd = temp;
	return;
} 


/*
	Run:   
	Value of first in main: 20
	Value of second in main: 10
*/