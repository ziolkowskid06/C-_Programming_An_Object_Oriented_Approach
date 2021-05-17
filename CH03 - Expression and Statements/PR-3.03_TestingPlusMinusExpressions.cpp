/***************************************************************
 * The program shows the use of plus/minus expressions         *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Declaration and initialization
	int x = 4;
	int y = -10;

	// Applying plus and minus operator on variable x 
	cout << "Using plus operator on x: " << +x  << endl; 
	cout << "Using minus operator on x: " << -x << endl;  

	// Applying plus and minus operator on variable y
	cout << "Using plus operator on y: " << +y  << endl; 
	cout << "Using minus operator on y: " << -y;  

	return 0;
}

/*
	Run:
	Using plus operator on x: 4
	Using minus operator on x: -4
	Using plus operator on y:-10
	Using minus operator on y: 10
*/