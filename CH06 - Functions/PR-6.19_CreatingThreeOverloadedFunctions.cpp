/***************************************************************
 * This program shows how we can use different signatures to   *
 * create three overloaded functions.                          *
 ***************************************************************/
#include <iostream>

using namespace std;

// Function Declaration
int max(int num1, int num2);
int max(int num1, int num2, int num3);
int max(int num1, int num2, int num3, int num4);

int main()
{
	// Three calls to overloaded max functions
	cout << "maximum (5, 7): " << max (5, 7) << endl;
	cout << "maximum (7, 9, 8): " << max (7, 9, 8) << endl;
	cout << "maximum (14, 3, 12, 11): " << max (14, 3, 12, 11);

	return 0;
}// End main


/***************************************************************
 * The following is the definition for the max function with   *
 * two arguments num1 and num2. It returns the maximum of the  *
 * parameters.                                                 *
 ***************************************************************/
int max(int num1, int num2)
{
	int larger;         // Local variable
	if (num1 >= num2)
	{
		larger = num1;
	}
	else 
	{
		larger = num2;
	}
	return larger;
}


/***************************************************************
 * The following is the definition for the max function with   *
 * three arguments num1, num2, and num3. It uses a call to     *
 * the function with two arguments to first find the maximum   *
 * of the first two. It then makes another call to the first   *
 * function to find the maximum of the result and the num3.    *
 ***************************************************************/
int max(int num1, int num2, int num3)
{
	return max(max(num1, num2), num3);
}


/***************************************************************
 * The following is the definition for the max function with   *
 * four arguments num1, num2, and num3, and num4. It uses a    *
 * a call to the function with three arguments first to find   *
 * the maximum of the first three, and then calls the function *
 * with two arguments to find the max of the previous result   *
 * and the fourth number.                                      *
 ***************************************************************/
int max(int num1, int num2, int num3, int num4)
{
	return max(max(num1, num2, num3), num4);
} // End max function with four parameters


/*
	Run:   
	maximum (5, 7): 7
	maximum (7, 9, 8): 9
	maximum (14, 3, 12, 11): 14
*/