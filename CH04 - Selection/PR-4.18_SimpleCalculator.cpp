/****************************************************************
 * Simulating a simple calculator using a menu-driven program.  *
 * The user selects an operation and then enters the numbers.   *
 * The program prints the result.                               *
 ****************************************************************/
#include <iostream>
using namespace std;

int main()
{
	// Declaration of variables
	int oper, num1, num2;
	
	// Displaying menu 
	cout << "Menu: " << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Remainder" << endl;
	
	// Get operation selection 
	cout << "Select one of the operations (1, 2, 3, 4, 5): ";
	cin >> oper;
	
	// Error checking for type of operation 
	if (oper < 1 || oper > 5)
	{
		cout << "Wrong operation! The program terminates." ;
		return 0;
	}
	
	// Getting the value of two numbers
	cout << "Enter the value of the first number: ";
	cin >> num1;
	cout << "Enter the value of the second number: ";
	cin >> num2;
	
	// Error checking for division by zero 
	if ((oper == 4 || oper == 5) && num2 == 0 )
	{
		cout << "Error division by zero. The program terminates.";
		return 0;
	}
	// Calculating Result of operation 
	switch (oper)
	{
	case 1 : cout << num1 << " + " << num2 << " = " << num1 + num2;
	break;
	case 2 : cout << num1 << " - " << num2 << " = " << num1 - num2;
	break;
	case 3 : cout << num1 << " * " << num2 << " = " << num1 * num2;
	break;
	case 4 : cout << num1 << " / " << num2 << " = " << num1 / num2;
	break; 
	case 5 : cout << num1 << " % " << num2 << " = " << num1 % num2;
	break;
	}
	
	return 0;      
} 

/*
	Run:
	Menu:
	1. Addition
	2. Subtraction
	3. Multiplication
	4. Division
	5. Remainder
	Select one of the operations (1, 2, 3, 4, 5): 1
	Enter the value of the first number: 20
	Enter the value of the second number: 35
	20 + 35 = 55

	Run:
	Menu:
	1. Addition
	2. Subtraction
	3. Multiplication
	4. Division
	5. Remainder
	Select one of the operations (1, 2, 3, 4, 5): 5
	Enter the value of the first number: 20
	Enter the value of the second number: 7
	20 % 7 = 6
*/