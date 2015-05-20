//	This is the solution to question number 4 of assignment #1
//
#include <iostream>
using namespace std;

float BMI(float weight, float height)	// BMI calculator function
{
	return weight/(height*height);
}

int main()
{

	float weight, height; 	// There is no problem doing this since weight and height where declared hitherto local
	cout<<"DEPARTMENT OF HEALTH AND HUMAN SERVICES"<<endl;	// print the company name and end of line or paragraph
	cout<<endl;          // Another end paragraph
	cout<<"Enter your weight in kg"<<endl;
	cin>>weight;
	cout<<"Enter your height in meters"<<endl;
	cin>>height;
	cout<<"Your body mass Index is "<<BMI(weight,height)<<endl;	// I simply called the BMI calculator function instead of having to declare another variable
    if(BMI(weight,height)<18.5) cout<<"you are underweight"<<endl;	// checks to see if this person is underweight
	else if(BMI(weight,height)>=18.5 && BMI(weight,height)<=24.9) cout<<"you are  Normal"<<endl;	// checks to see if this person is Normal
	else if(BMI(weight,height)>=25 && BMI(weight,height)<=29.9) cout<<"You are too fat"<<endl;	// checks to see if this person is a kind of...........fat!
	else cout<<"Obesity"<<endl;		// well I really don't known what this obesity term means but.......it's manageable
system("PAUSE");
return 0;
}
