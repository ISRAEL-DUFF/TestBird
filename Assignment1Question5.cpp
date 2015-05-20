// This is the solution to question number 4 of assignment #1
// I have impplemented another new function called numOfDigits(int x), this function calculates the number of digits required to represent the integer x in base 10
// Note: the program will display a warning message because of the mixture of double and int values but it will run

#include <iostream>
#include <math.h>
using namespace std;

double numOfDigit(int x)     //This function computes the number of digits required to represent x in base 10
{
    return floor(log10(x));
}


void tab(int n)		// n is the number of space to tab
{
	for(int x=1; x<=n; x++)		// As long as x is less than or equal to n
		cout<<" ";              // Print a single empty space
 }				

int main()
{
	cout<<"Integer"<<"   Square"<<"   Cube"<<endl;
	int incr;
	cout<<0<<"          "<<0<<"        "<<0<<endl;	// This first part of the code gave me tough time so I had to move it outside the loop
	for(incr=1; incr<=10; incr++)
	{
		cout<<incr;             //display incr
		tab(10-numOfDigit(incr));         // determine the number of digits in incr and subtract from 10 which is the total space
		cout<<incr*incr;                  // display the square of incr
		tab(8-numOfDigit(incr*incr));     // determine the number of digits in incr*incr and subtract from 8 which is the total space
		cout<<incr*incr*incr;             // display the cube of incr
		cout<<endl;                       // start a new paragraph or row
			
	}    // repeat the above for incr less than or equal to 10
	system("PAUSE");
	return 0;
}
