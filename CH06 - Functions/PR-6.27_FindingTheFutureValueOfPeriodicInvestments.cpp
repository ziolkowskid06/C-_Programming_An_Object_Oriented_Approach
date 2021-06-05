/********************************************************************
 * This program shows the use of functions to calculate the future  *
 * value of periodic investments each of the same amount.           *
 ********************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

// Declaration of top-level functions
void input(double& invest, double& rate, double& term);
void process(double invest, double rate, double term,
             double& multiplier, double& futureValue);
void output(double invest, double rate, double term, 
            double multiplier, double futureValue);

// Declaration  of low-level functions
double getInput(string message);
double findMultiplier(double rate, double period);
void printData(double invest, double rate, double term);
void printResult(double multiplier, double value);

int main()
{
	// Variable Declaration
	double invest, rate, term;                   // For input
	double multiplier, futureValue;              // For Result
	
	// Call first level functions
	input(invest, rate, term);
	process(invest, rate, term, multiplier, futureValue);
	output(invest, rate, term, multiplier, futureValue);

	return 0;
}


/*****************************************************************
 * The input function gets three inputs by calling the getInput  *
 * function three times. It uses pass-by-reference to send back  *
 * the values to main. After the function termination, the       *
 * data values are stored in invest, rate, and term.             *
 *****************************************************************/
void input(double& invest, double& rate, double& term)
{
	invest = getInput("Enter the value of periodic investment: ");
	rate = getInput("Enter the interest rate per year: ");
	term = getInput("Enter the term (number of years): ");
}


/*********************************************************************
 * The process function calls findMultiplier to calculate the        *
 * the multiplier. It then multiplies the return value by the value  *
 * invested to find the future value.                                *
 *********************************************************************/
void process(double invest, double rate, double term, 
             double& multiplier, double& futureValue)
{
	multiplier = findMultiplier(rate, term);
	futureValue  = multiplier * invest; 
}


/*********************************************************************
 * The output function calls printData to print three given values.  *
 * It then calls printResult to print the two calculated values.     *
 *********************************************************************/
void output(double invest, double rate, double term, 
            double multiplier, double futureValue)
{
	printData(invest, rate, term);
	printResult(multiplier, futureValue);
}


/*******************************************************************
 * The getInput function gets the input from the user. Its         *
 * only parameter is an object of type string that contains        *
 * a different message in each call to force the user to input     *
 * the appropriate data. It then validates data and sends it back  *
 * to the calling expression in the input function.                *
 *******************************************************************/
double getInput(string message)
{
	double input;
	do
	{
		cout << message;
		cin >> input;
	} while (input < 0.0);
	return input;
}


/************************************************************************
 * This findMultiplier in this case needs to add all multipliers        *
 * calculated for each year together, each with a different exponent.   *
 * The function then returns the result to the process function.        *
 ************************************************************************/
double findMultiplier(double rate, double term)
{
	double multiplier = 0;
	double factor = 1 + rate/100;
	for (int i =  term; i > 0 ; i--)
	{
		multiplier += pow(factor, i);
	}
	return multiplier;
}


/****************************************************************
 * The printData function prints the three data items input by  *
 * the user with appropriate explanations.                      *
 ****************************************************************/
void printData(double invest, double rate, double term)
{
	cout << endl << "Information about period invesment" << endl;
	cout << "Periodic Investment: " << fixed << setprecision(2) << invest << endl;
	cout << "Interest rate: " << rate << fixed << setprecision(2); 
	cout << " percent per year" << endl;
	cout << "Term: " << term << " years" << endl << endl;
}


/********************************************************************
 * The printResult function prints the two results of the program.  *
 * It prints the multiplier and the futureValue of the investment.  *
 ********************************************************************/
void printResult(double multiplier, double futureValue)
{
	cout << "Result of investment" << endl;
	cout << "Investment is multiplied by: " << fixed << setprecision(8);
	cout << multiplier << endl;
	cout << "Future value: " << fixed << setprecision(2); 
	cout << futureValue << endl;
}

/*
	Run:   
	Enter the value of periodic investment: 12000
	Enter the interest rate per year: 5
	Enter the term (number of years): 30

	Information about period invesment
	Periodic Investment: 12000.00
	Interest rate: 5.00 percent per year
	Term: 30.00 years

	Result of investment
	Investment is multiplied by: 69.76078988
	Future value: 837129.48
*/