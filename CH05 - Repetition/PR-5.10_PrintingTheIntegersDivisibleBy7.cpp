/***************************************************************
 * Prints numbers divisible by 7 in the range 1 to 300 in a    *
 * table made of 10 columns.                                   *
 ***************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main () 
{
	// Declaration including initialization
	int lower = 1;
	int higher = 300;
	int divisor = 7;
	int col = 1;

	// Processing loop   
	for (int i = lower; i < higher ; i++)
	{      
		if (i % divisor == 0)
		{
			cout << setw(4) << i;
			col++;
			
			if (col > 10 )
			{
				cout << endl;
				col = 1;
			}
		}
	} 

	return 0; 
}

/*
	Run: 
	      7   14   21   28   35   42   49   56   63   70
	     77   84   91   98  105  112  119  126  133  140
	    147  154  161  168  175  182  189  196  203  210
	    217  224  231  238  245  252  259  266  273  280
	    287  294
*/