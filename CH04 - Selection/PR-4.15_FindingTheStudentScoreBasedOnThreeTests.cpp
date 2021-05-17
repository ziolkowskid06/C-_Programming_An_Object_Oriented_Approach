/*****************************************************************
 * Finding the student score based on the given three scores     *
 * The program sets the student score to the average of maximum  *
 * and minimum of the three scores                               *
 *****************************************************************/
#include <iostream>

using namespace std;

int main ( )
{
	// Declarations
	int score1, score2, score3, maxScore, minScore, score;
	
	// Input 
	cout << "Enter the first score: ";
	cin >> score1;
	cout << "Enter the second score: ";
	cin >> score2;
	cout << "Enter the third score: ";
	cin >> score3;
	
	// Find maximum score 
	if (score1 > score2 && score1 > score3)
	{
		maxScore = score1;
	}
	else if (score2 > score1 && score2 > score3)
	{
		maxScore = score2;
	}
	else
	{
		maxScore = score3;
	}
	
	// Find minimum score 
	if (score1 < score2 && score1 < score3)
	{
		minScore = score1;
	}
	else if (score2 < score1 && score2 <= score3)
	{
		minScore = score2;
	}
	else
	{
		minScore = score3;
	}
	
	// Find and round the student score 
	int temp = maxScore + minScore;
	
	if (temp % 2 == 1) 
	{
		temp += 1;
	}
	
	score = temp / 2; 
	
	// Print results 
	cout << "Scores: " << score1 << " " << score2 << " " << score3 << endl;
	cout << "minimum and maximum scores: ";
	cout << minScore << " " << maxScore << endl;
	cout << "Student score: " << score;
	
	return 0;      
}

/*
	Run:
	Enter the first score: 78
	Enter the second score: 92
	Enter the third score: 79
	Scores: 78 92 79
	minimum and maximum scores: 78 92
	Student score: 85

	Run:
	Enter the first score: 65
	Enter the second score: 93
	Enter the third score: 60
	Scores: 65 93 60
	minimum and maximum scores: 60 93
	Student score: 77
*/