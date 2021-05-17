/***************************************************************
 * Write a program that finds the minimum and maximum values   *
 * for a short, unsigned int, long, long long, float, double   *
 ***************************************************************/
#include <iostream>
#include <limits>

using namespace std;

int main()
{
	// Find max and min values
	short numShortMax = numeric_limits <short> :: max(); 
	short numShortMin = numeric_limits <short> :: min();
	unsigned int numIntMax = numeric_limits <unsigned int> :: max();
	unsigned int numIntMin = numeric_limits <unsigned int> :: min();
	long numLongMax = numeric_limits <long> :: max();
	long numLongMin = numeric_limits <long> :: min();
	long long numLongLongMax = numeric_limits <long long> :: max();
	long long numLongLongMin = numeric_limits <long long> :: min();
	float numFloatMax = numeric_limits <float> :: max();
	float numFloatMin = numeric_limits <float> :: min();	
	double numDoubleMax = numeric_limits <double> :: max();
	double numDoubleMin = numeric_limits <double> :: min();

	// Output
	cout << "'short' max: " << numShortMax << endl;
	cout << "'short' min: " << numShortMin << endl << endl;
	cout << "'unsigned int' max: " << numIntMax << endl;
	cout << "'unsigned int' min: " << numIntMin << endl << endl;
	cout << "'long' max: " << numLongMax << endl;
	cout << "'long' min: " << numLongMin << endl << endl;
	cout << "'long long' max: " << numLongLongMax << endl;
	cout << "'long long' min: " << numLongLongMin << endl << endl;
	cout << "'float' max: " << numFloatMax << endl;
	cout << "'float' min: " << numFloatMin << endl << endl;
	cout << "'double' max: " << numDoubleMax << endl;
	cout << "'double' min: " << numDoubleMin << endl << endl;

	return 0;
}

/*
	Run:
	'short' max: 32767
	'short' min: -32768

	'unsigned int' max: 4294967295
	'unsigned int' min: 0

	'long' max: 2147483647
	'long' min: -2147483648

	'long long' max: 9223372036854775807
	'long long' min: -9223372036854775808

	'float' max: 3.40282e+38
	'float' min: 1.17549e-38

	'double' max: 1.79769e+308
	'double' min: 2.22507e-308
*/