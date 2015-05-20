//	This is the solution to question number 2 of assignment #1
//	

#include <iostream>
using namespace std;

int main()
{
	int number1, number2; // these are the integer variable that will hold the numbers entered by the user
	cout<<"Enter first number"<<endl;	//instruction for input
	cin>>number1;	// read first number from the user and store it in the variable number1
	cout<<"Enter second number"<<endl;	// Another instruction for input
	cin>>number2;		// read the second number and store the value in the variable number2
	
	if(number1%number2==0)	// number1 is a multiple of number2 if the remainder is zero when number2 divides number1
		cout<<number1<<" is a multiple of "<<number2<<endl;	// if the fact above is true, then let us know
	else cout<<number1<<" is not a multiple of  "<<number2<<endl;	// this is what will happen if it's not true
	
	system("PAUSE");	// pause the console
	return 0;		// finally, exit program
}	// end of main function



	
	
