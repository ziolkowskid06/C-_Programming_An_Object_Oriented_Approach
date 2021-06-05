/***************************************************************
 * A program to test the use of an automatic local variable    *
 ***************************************************************/
#include <iostream>

using namespace std;

void fun();

int main()
{
	fun();
	fun();
	fun();

	return 0;
} 


/*******************************************************************
 * The function has two automatic local variables, num and count.  *
 * In each function call, these variables are initialized.         *
 *******************************************************************/
void fun()
{
	int num = 3;                // implicit auto variable                                          
	auto count = 0;     // explicit auto variable 
	num++;                                                                        
	count++;                    
	cout << "num = " << num << " and " << "count = " << count << endl;
}

/*
	Run:
	num = 4 and count = 1
	num = 4 and count = 1
	num = 4 and count = 1
*/