/*************************************************************************************
 * Assume a party of three couples dines in a restaurant. The first family has two   *
 * children. Each of the other families has one child. Write a program that divides  *
 * the bill among each family if a child is charged 3/4 of an adult share. The total *
 * charge (before tax) is given as an input. The tax is 9.5 percent, and 20 percent  *
 * must be added for service.                                                        *
 *************************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Variable declaration
	unsigned int numAdults = 6; 
	unsigned int numChildren = 4;
	double netBill, totalBill, share, family1, family2, family3;  
	const double tax = 1.095;
	const double service = 1.20;

	// Input
	cout << "The bill is: ";
	cin >> netBill;

	// Processing
	totalBill = netBill * tax * service;
	share = totalBill / (numAdults+0.75*numChildren);
	family1 = share * (2 + 2*0.75);
	family2 = share * (2 + 1*0.75);
	family3 = share * (2 + 1*0.75);

	// Output
	cout << fixed << showpoint << setprecision(2); 
	cout << "\nBill Inc. Tax and Service: " << totalBill << " $" << endl;
	cout << "Family no.1 must pay: " << family1 << " $" << endl;
	cout << "Family no.2 must pay: " << family2 << " $" << endl;
	cout << "Family no.3 must pay: " << family3 << " $" << endl;
	cout << "\nCheck the sum: " << family1+family2+family3 << " $";

	return 0;
}

/*
	Run:
	The bill is: 1234.78

	Bill Inc. Tax and Service: 1622.50 $
	Family no.1 must pay: 630.97 $
	Family no.2 must pay: 495.76 $
	Family no.3 must pay: 495.76 $

	Check the sum: 1622.50 $
*/