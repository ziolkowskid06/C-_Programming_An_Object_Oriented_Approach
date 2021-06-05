/***************************************************************
 * This program shows how to use three functions: input an     *
 * integer representing a year, check if it is a leap year,    *
 * and print the result.                                       *
 ***************************************************************/
#include <iostream>

using namespace std;

// Declarations (prototypes)
int input();
bool process(int year);
void output(int year, bool result);

int main()
{
	// Input, processing, output
	int year = input();
	bool result = process(year);
	output(year, result);
}


/******************************************************************
 * The definition of the input function. It is called in the      *
 * main function. It takes the value of the year from the user    *
 * (side effect), validates the year to be greater than 1582,     *
 * and returns the result to the main function. The function is   *
 * value-returning, with no parameters, but with a side effect.   *
 ******************************************************************/
int input()
{
	int year; 
	do
	{
		cout << "Enter a year after 1582: " ;
		cin >> year;
	} while (year <= 1582);
	return year;
}


/******************************************************************
 * The definition of the process function. It takes the value of  *
 * the year from the main function as a parameter. It checks to   *
 * to see if it is a leap year and returns a boolean value back   *
 * to main. It is a value-returning function with a parameter     *
 * and no side effect.                                            *
 ******************************************************************/
bool process(int year)
{
	bool criteria1 = (year % 4 == 0);
	bool criteria2 = (year % 100 != 0) || (year % 400 == 0);
	return (criteria1) && (criteria2);
}


/*******************************************************************
 * The output function takes the year value and the Boolean value  *
 * returned from the process function. It prints the results on    *
 * the monitor. It is a void function with two parameters.         *
 *******************************************************************/
void output(int year, bool result)
{
	if (result)   
	{
		cout << "Year " << year << " is a leap year.";
	}
	else
	{
		cout << "Year " << year << " is not a leap year.";
	}

	return;
}


/*
	Run:
	Enter a year after 1582: 1900
	Year 1900 is not a leap year.
	
	Run:
	Enter a year after 1582: 1500
	Enter a year after 1582: 1600
	Year 1600 is a leap year.	
*/