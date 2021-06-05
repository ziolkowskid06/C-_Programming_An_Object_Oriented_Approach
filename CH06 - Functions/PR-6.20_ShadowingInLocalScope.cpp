/***************************************************************
 * A variable declared inside a block shadows another variable *
 * with the same name declared outside the block               *
 ***************************************************************/
#include <iostream>

using namespace std;

int main()
{
	int sum = 5;
	cout << sum << endl;
	{
		int sum = 3;
		cout << sum << endl;  // The sum in the inner block is visible
	} 
	cout << sum << endl;  // The sum in the outer block is visible
	
	return 0;
}


/*
	Run:
	5
	3
	5
*/