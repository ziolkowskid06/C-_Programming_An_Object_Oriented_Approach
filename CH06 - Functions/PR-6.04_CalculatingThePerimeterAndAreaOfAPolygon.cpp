/***************************************************************
 * This program finds the perimeter and the area of a polygon  *
 * given the number of sides and the length of a side          *
 ***************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main ( )
{
	// Declarations
	const double PI = 3.141592653589793238462;
	int n;
	double s, peri, area;

	// Inputting number of sides
	do
	{
		cout << "Enter the number of sides (4 or more): ";
		cin >> n;
	} while (n < 4); 

	// Inputting the length of each side
	do
	{
		cout << "Enter length of each side: ";
		cin >> s;
	} while (s <= 0.0); 

	// Calculating perimeter and area
	peri = n * s;
	area = (n * pow (s, 2)) / (n * tan (PI / n));

	// Printing results 
	cout << "Perimeter: " << peri << endl;
	cout << "Area: " << area;

	return 0;      
}

/*
	Run:
	Enter the number of sides (4 or more): 2
	Enter the number of sides (4 or more): 3
	Enter the number of sides (4 or more): 4
	Enter length of each side: 5
	Perimeter: 20
	Area: 25
	
	Run:
	Enter the number of sides (4 or more): 5
	Enter length of each side: 5
	Perimeter: 25
	Area: 34.4095
*/