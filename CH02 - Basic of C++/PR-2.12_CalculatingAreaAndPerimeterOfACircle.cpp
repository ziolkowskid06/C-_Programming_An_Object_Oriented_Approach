/***************************************************************
 * This program calculates the area and perimeter of a circle. *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Defining a stored constant
	const double PI = 3.14159;
	
	// Defining three variables
	double radius;
	double perimeter;
	double area;
	
	// Inputting value for radius 
	cout << "Enter the radius of the circle: "; 
	cin >> radius;
	
	// Calculating perimeter and area and storing them in variables 
	perimeter = 2 *  PI * radius;      // 2 is used as a constant literal
	area = PI * PI * radius; 
	
	// Outputing the value of radius, perimeter, and area 
	cout << "The radius is: " << radius << endl;
	cout << "The perimeter is: " << perimeter << endl;
	cout << "The area is: " << area;
	return 0;
}

/*
	Run:
	Enter the radius of the circle: 10.5
	The radius is: 10.5
	The perimeter is: 65.9734
	The area is: 103.631
*/