/***************************************************************
 * A program to test the use of static variables               *
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


/****************************************************************
 * The function has one static variable named count. It is      *
 * initialized in the first call, but it holds its value for    *
 * the next time. This means value is incremented in each call. *
 ****************************************************************/
void fun()
{
	static int count = 0;   // explicit static variable 
	count++;                    
	cout << "count = " << count << endl;
}

/*
	Run:
	count = 1
	count = 2
	count = 3
*/