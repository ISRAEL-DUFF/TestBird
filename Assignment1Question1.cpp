//	This is the solution to question number 1 of assignment #1
//	

#include <iostream>
using namespace std;

int main()
{
	int number;	// number to be inputed
	cout<<"Enter Number"<<endl;
	cin>>number;	// Load number from console
	if(number%2==0)		// Checks to see if the number entered is an even number. 2 divides any even number with zero  remainder
		cout<<number<<" is an even integer"<<endl;		// if what I said above is true, then announce it
	else cout<<number<<" is an odd integer"<<endl;		// if an integer is not even, then it's odd
	system("PAUSE");	// pause the console for a moment
	return 0;		// finally, exit the program
}	// end of computation


		
