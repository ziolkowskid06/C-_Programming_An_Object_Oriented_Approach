/***************************************************************
 * The program shows some literal expressions.                 *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	 cout << false << "  " << 'A' << "  " << "Hello" << endl;               
	 cout << 23412 << "  " << 12897234L << endl; 
	 cout << 245.78F << "   " << 114.782 << "  " << 2.051L;
	 return 0;
}

/*
	Run:
	0  A  Hello  				// A Boolean , a character, a string
	23412  12897234 		    // An integer, a long integer (there is no short literal) 
	24.78   114.782   2.051     // A float, a double, a long double
*/