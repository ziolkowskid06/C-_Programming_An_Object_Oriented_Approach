/******************************************************************
 * This program shows how to find the sale amount of a purchase   *
 * including tax given the quantity and unit price                *
 ******************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{ 
	// Constant
	const double TAXRATE = 8.5;

	// Variable declaration
	int  quantity;
	double unitPrice;
	double subTotal, tax, total;

	// Prompt and Input
	cout << "Enter the quantity of the items bought: ";
	cin >> quantity;
	cout << "Enter the unit price of the item: "; 
	cin >> unitPrice;

	// Processing
	subTotal = quantity * unitPrice;  
	tax = subTotal * (TAXRATE / 100); 
	total = subTotal + tax; 

	// Output
	cout << endl;
	cout << fixed << setprecision(2) << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Unit price: " << unitPrice << endl;
	cout << "Subtotal: " << subTotal << endl;  
	cout << "Tax: " << tax << endl; 
	cout << "Total: " << total << endl; 

	return 0;
} 

/*
	Run:
	Enter the quantity of the items bought: 20
	Enter the unit price of the item: 12.4
	Quantity: 20
	Unit price: 12.40
	Subtotal: 248.00
	Tax: 21.08
	Total: 269.08
*/