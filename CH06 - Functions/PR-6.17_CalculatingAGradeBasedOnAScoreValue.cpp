/***************************************************************
 * This program shows how to use three functions to input,     *
 * calculate, and print the score and grade of a student.      *
 ***************************************************************/
#include <iostream>

using namespace std;

// Function declarations
int getScore();
char findGrade( int score);
void printResult(int score, char grade);

int main() 
{
	// Declaration
	int score;
	char grade;

	// Function calls
	score = getScore();
	grade = findGrade(score);
	printResult(score, grade);
	
	return 0;
}


/******************************************************************
 * The getScore function is an input function with a side effect  *
 * that gets the input from the user and returns the score by     *
 * value to the main function. It uses a local variable (score)   *
 * whose value is returned to the main function. The function     *
 * also validates the score to be between 0 and 100.              *
 ******************************************************************/
int getScore()
{
	int score;  // Local declaration
	do  
	{
		cout << "Enter a score between 0 and 100: ";
		cin >> score;
	} while (score < 0 || score > 100);
	return score;
}


/******************************************************************
 * The findGrade function calculates and returns a character      *
 * grade (A, B, C, D, F) related to the scored passed to it.      *
 * It uses pass-by-value to get the value of the score. It        *
 * use return-by-value to return the grade to the main function.  *
 * We have used a nested if-else construct, but it can also be    *
 * be done using a switch statement.                              *
 ******************************************************************/
char findGrade(int score)
{
	char grade;  // Local declaration
	if (score >= 90)
	{
		grade = 'A';
	}
	else if (score >= 80)
	{
		grade = 'B';
	}
	else if (score >= 70)
	{
		grade = 'C';
	}
	else if (score >= 60)
	{
		grade = 'D';
	}
	else 
	{
		grade = 'F';
	}
	return grade;
}


/****************************************************************
 * The last function prints the score and corresponding grade.  *
 ****************************************************************/
void printResult(int score, char grade)
{
	cout << endl << "Result of the test." << endl;
	cout << "Score: " << score << " out of 100"<< endl;
	cout << "Grade: " << grade;
}

/*
	Run:   
	Enter a score between 0 and 100: 87
	Result of the test.
	Score: 87 out of 100
	Grade: B

	Run:   
	Enter a score between 0 and 100: 93
	Result of the test.
	Score: 93 out of 100
	Grade: A
*/