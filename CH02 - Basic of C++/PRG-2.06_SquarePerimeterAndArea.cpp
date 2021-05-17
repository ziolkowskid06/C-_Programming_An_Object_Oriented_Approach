/*************************************************************************************
 * Write a program that calculates and prints the area and the perimeter of a square *
 * when the size of one side is given.                                               *
 *************************************************************************************/
#include <iostream>

using namespace std;

int main()
{
	float size, perimeter, area;

	// Ask for data
	cout << "Enter square size: ";
	cin >> size;

	// Calculate and print perimeter and area
	perimeter = 4 * size;
	area = size * size;
	cout << "\nPerimeter: " << perimeter << endl;
	cout << "Area: " << area;

	return 0;
}