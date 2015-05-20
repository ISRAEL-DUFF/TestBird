//	This is the solution to question number 4 of assignment #1
//	In this program, I implement a simple function called tab(). This function works like the tab key on the system keyboard
//	Next, the variable called decimal_Point_Shift is simply an integer variable that I used to shift the decimal point of a number left or right.
//	I also implement the integer division function. It's not as if it is not available in <math.h>  or <cmath>, but it's just fun to implement

#include <iostream>
using namespace std;

void tab(int n)		// n is the number of space to tab
{
	for(int x=1; x<=n; x++)		// As long as x is less than or equal to n
		cout<<" ";				// Print a single empty space
}

int myFloor(int numb, int n)   //My own implementation of the integer division function. It takes two argument and performs the necessary computation
{
	return (numb-(numb%n))/n;	//	Please pardon my manners, I just want to keep things short and neat. 
}

int main()
{
	int decimal_Point_Shift=10000;		// initialised to 10000 so as to shift decimal point 4 places to the left or right
	int num0, num1, num2, num3;			// These are just int variables that helps in storage
	cout<<"Enter any five digit number"<<endl;    // Instruction on what to do when the program is running
	cin>>num1;			// Load the five digit number from the user
	
	for(int k=1; k<=5; k++)
	{
		num2=myFloor(num1,decimal_Point_Shift);		// store the integer part (or quotient) of num0 divided  by decimal_Point_Shift;
		cout<<num2;				// print num2 to console
		tab(3);					// shift cursor three places to the right.
		num3=num2*decimal_Point_Shift;	// shift the decimal point 4 places to the right
		num1=num1-num3;
		decimal_Point_Shift=decimal_Point_Shift/10;	// reduce the number of place to be shifted by 1;
	}	// end of computation.
	cout<<endl;
	
	system("PAUSE");	// Pause the console for a while
	return 0;		// exit the program
}
	
