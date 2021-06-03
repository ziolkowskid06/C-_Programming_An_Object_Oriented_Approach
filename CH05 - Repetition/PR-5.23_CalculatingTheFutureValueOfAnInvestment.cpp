/***************************************************************
 * The program calculates the future value of an investment    *
 * given the interest rate and the number of periods           *
 ***************************************************************/
#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
	// Declaration
	int numOfPeriods;
	double investment, futureValue, interestRate;
	
	// Input
	do
	{
		cout << "Enter the number of periods: ";
		cin >> numOfPeriods;
	} while (numOfPeriods < 0);
	do
	{
		cout << "Enter a non-negative value for interest rate: ";
		cin >> interestRate;
	} while (interestRate < 0.0);
	do
	{
		cout << "Enter a non-negative value for investment: ";
		cin >> investment;
	} while (investment < 0.0);
	
	// Initialization
	futureValue = investment;
	
	// Future Value Calculation
	for (int i = 1; i <= numOfPeriods; i++)
	{
		futureValue = futureValue * (1 + interestRate/100);
	} 
	
	// Output
	cout << fixed << setprecision(2); 
	cout << "Future value is = " << futureValue;

	return 0;  
}
/*
	Run:
	Enter the number of periods: 5
	Enter a non-negative value for interest rate: 5
	Enter a non-negative value for investment: 1000
	Future value is = 1276.28
	
	Run:
	Enter the number of periods: 20
	Enter a non-negative value for interest rate: 5
	Enter a non-negative value for investment: 10000
	Future value is = 26532.98
*/