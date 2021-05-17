/*************************************************************************************
 * Write a program that calculates the sales tax of a transaction given the sale     *
 * amount. Assume that the tax is 9 percent.                                         *
 *************************************************************************************/
#include <iostream>

using namespace std;

int main()
{
	double saleAmount, taxAmount, totalValue;
	const double taxRate = 0.09;

	// Ask for sale amount
	cout << "Enter the sale amount: ";
	cin >> saleAmount;

	// Print tax amount and total amount due
	taxAmount = saleAmount * taxRate;
	totalValue = saleAmount + taxAmount;
	cout << "\nTax amount: " << taxAmount << endl;
	cout << "Total amount due: " << totalValue;

	return 0;

}

/*
	Run:
	Enter the sale amount: 100

	Tax amount: 9
	Total amount due: 109
*/