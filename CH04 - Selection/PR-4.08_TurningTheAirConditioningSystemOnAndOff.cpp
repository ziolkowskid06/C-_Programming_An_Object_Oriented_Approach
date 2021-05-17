/***************************************************************
 * Turn the air conditioning system on if the temperature is   * 
 * below or above a certain temperature.                       * 
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Variable declaration
	int temperature;
	bool hot;
	bool cold;
	
	// Input the temperature 
	cout << "Enter the temperature: "; 
	cin >>  temperature; 
	
	// Set two conditions
	hot = temperature >= 75;
	cold = temperature <= 65;
	
	// Make the decision
	if (hot || cold)
	{
		cout << "The air condition system is turned on!" << endl;
		
		if (hot)
		{
			cout << "The cooler is working!" << endl;
		}
		else
		{
			cout << "The heater is working!" << endl;
		}
	}
	else
	{
		cout << "The air condition system is turned off!" << endl;
	}
	
	return 0;
}

/*
Run:
Enter the temperature: 73
The air condition system is turned off!

Run:
Enter the temperature: 63
The air condition system is turned on!
The heater is working!

Run:
Enter the temperature: 82
The air condition system is turned on!
The cooler is working!
*/