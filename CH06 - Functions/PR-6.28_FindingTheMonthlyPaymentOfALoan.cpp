/******************************************************************
 * This program shows how to find the monthly payment of a loan   *
 * using two multipliers: loan multiplier and payment multiplier. *
 ******************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std; 

// Declaration of top-level functions
void input(double& loan, double& rate, int& term);
void process(double loan, double rate, int term, double& loanMultiplier, 
               double& paymentMultiplier, double& payment);
void output(double loan, double payment, double rate, int term);

// Declaration of low-level functions
double getInput(string message);
double findLoanMultiplier(double rate, int term);
double findPaymentMultiplier(double rate, int term);
void outputLoanInformation(double loan, double payment);
void outputAmortization(double loan, double payment, double rate, int term);

int main()
{
	// Declarations of variables 
	double loan;
	double rate;
	int term;
	double loanMultiplier, paymentMultiplier, payment;       

	// Calling top-level functions 
	input(loan, rate, term);
	process(loan, rate, term, loanMultiplier, paymentMultiplier, payment);
	output(loan, payment, rate, term);

	return 0;
} 


/*****************************************************************
 * The input function gets three inputs by calling the getInput  *
 * function three times. It uses pass-by-reference to send back  *
 * the values to the main. After the function termination, the   *
 * data values are stored in invest, rate, and term.             *
 *****************************************************************/
void input(double& loan, double& rate, int& term)
{
	loan = getInput("Enter the value of loan: ");
	rate = getInput("Enter the interest rate per year: ");
	term = getInput("Enter the term (number of years): ");
} 


/*********************************************************************
 * The process function calls findMultiplier to calculate the        *
 * the multiplier. It then multiplies the return value by the value  *
 * invested to find the future value.                                *
 *********************************************************************/
void process(double loan, double rate, int term, double& loanMultiplier,
              double& paymentMultiplier, double& payment)
{
	loanMultiplier = findLoanMultiplier (rate, term);
	paymentMultiplier = findPaymentMultiplier (rate, term);
	payment = loan * (loanMultiplier/paymentMultiplier);
}


/*********************************************************************
 * The output function calls printData to print three given values.  *
 * It then calls printResult to print the two calculated values.     *
 *********************************************************************/
void output(double loan, double payment, double rate, int term)
{
	outputLoanInformation(loan, payment);
	outputAmortization(loan, payment, rate, term);
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


/*******************************************************************
 * findLoanMultiplier is simple. The two values, rate and term     *
 * are passed to it by value. It first calculates the factor. It   *
 * then returns the multiplier using the pow function.             *
 *******************************************************************/
double findLoanMultiplier(double rate, int term)
{
	int n = term * 12;
	double factor = 1 + rate/12/100;
	return pow(factor , n);
}


/********************************************************************
 * findPaymentMultiplier is simple. The two values, rate and term   *
 * are passed to it by value. It first calculates the factor. It    *
 * then uses a loop to find the accumulated paymentMultiplier       *
 ********************************************************************/
double findPaymentMultiplier(double rate, int term)
{
	double paymentMultiplier = 0;
	double factor = 1 + rate/12/100;
	int n = term * 12; 
	for (int i = n - 1 ; i >= 0 ; i--)
	{
		paymentMultiplier += pow (factor , i);
	}
	return paymentMultiplier;
}


/********************************************************************
 * The outputLoanInformation prints the information about the loan  *
 * including loan value, and monthly payment.                       *
 ********************************************************************/
void outputLoanInformation(double loan, double payment)
{
	cout << "Loan: " << fixed << setprecision(2);
	cout << loan << endl << endl;
	cout << "Monthly Payment: " << fixed << setprecision(2);
	cout << payment << endl << endl;
}


/*******************************************************************
 * outputAmortization prints the changes in the balance of the     *
 * loan after each month’s payment. It also shows how much of the  *
 * payment goes to payoff the loan and how much is interest.       *
 *******************************************************************/
void outputAmortization(double loan,  double payment, 
                         double rate, int term)
{
	// Printing title
	cout << "Amortization:" <<endl; 
	cout << setw(7)  << "Month";
	cout << setw(9)  << "Payment";
	cout << setw(10) << "Interest";
	cout << setw(12) << "Principal";
	cout << setw(12) << "Balance" << endl ;
	
	// Printing lines
	cout << setw(7)  << "-----";
	cout << setw(9)  << "-------";
	cout << setw(10) << "--------" ;
	cout << setw(12) << "---------" ;
	cout << setw(12) << "-------" << endl;
	
	// New declarations
	double balance = loan;
	double interest;
	double principal;
	
	// Printing amortization table
	for (int month = 1; month <= term * 12; month++)
	{
		interest = balance * rate /100/12;
		principal = payment - interest;
		balance = balance - principal;
		if ((principal + interest) < payment)
		{
			payment = principal + interest;
		}
		cout << fixed << showpoint << right;
		cout << setw(7) << month;   
		cout << setw(9)  << setprecision(2) << payment;
		cout << setw(10) << setprecision(2) << interest;
		cout << setw(12) << setprecision(2) << principal;
		cout << setw(12) << setprecision(2) << balance << endl;
	}
}


/*
	Run:   
	Enter the value of loan: 10000
	Enter the interest rate per year: 5
	Enter the term (number of years): 1
	Loan: 10000.00
	Monthly Payment: 856.07
	Amortization:
	Month Payment Interest Principal  Balance
	----- ------- -------   -------   -------
	    1  856.07  41.67    814.41    9185.59
	    2  856.07  38.27    817.80    8367.79
	    3  856.07  34.87    821.21    7546.58
	    4  856.07  31.44    824.63    6721.95
	    5  856.07  28.01    828.07    5893.88
	    6  856.07  24.56    831.52    5062.37
	    7  856.07  21.09    834.98    4227.39
	    8  856.07  17.61    838.46    3388.92
	    9  856.07  14.12    841.95    2546.97
	   10  856.07  10.61    845.46    1701.51
	   11  856.07   7.09    848.99     852.52
	   12  856.07   3.55    852.52       0.00
   */