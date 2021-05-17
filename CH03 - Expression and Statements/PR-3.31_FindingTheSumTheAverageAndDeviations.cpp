/***************************************************************
 * This program takes three integers, adds them, finds their   *
 * average and the deviation of each from the average.         *
 ***************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main ( )
{
	// Variable declaration
	int num1, num2, num3;
	int sum;
	double average;
	double dev1, dev2, dev3;

	// Prompt and Input
	cout << "Enter the first integer: "; 
	cin >> num1; 
	cout << "Enter the second integer: "; 
	cin >> num2;
	cout << "Enter the third integer: "; 
	cin >> num3; 

	// Processing
	sum = num1 + num2 + num3; 
	average = static_cast <double> (sum) / 3; 
	dev1 = num1 - average; 
	dev2 = num2 - average; 
	dev3 = num3 - average; 

	// Output
	cout <<  fixed << setprecision (2) << showpos; 
	cout << "Sum of three numbers: " << sum << endl;
	cout <<  "Average: " << setw(9) << average << endl; 
	cout <<  "Deviation of number 1: " << setw(9) << dev1 << endl; 
	cout <<  "Deviation of number 2: " << setw(9) << dev2 << endl; 
	cout <<  "Deviation of number 3: " << setw(9) << dev3 << endl;  

	return 0;
}

/*
	Run:
	Enter the first integer: 100
	Enter the second integer: 101
	Enter the third integer: 103
	Sum of three numbers: 304
	Average:    101.33
	Deviation of number 1:     −1.33
	Deviation of number 2:     −0.33
	Deviation of number 3:     +1.67
*/