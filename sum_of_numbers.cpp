#include <iostream>
using namespace std;
int main()
{
	//This program is used to calculate the sum of two numbers
	float num1 ,num2,sum;
	cout<<"Enter a number : ";
	cin >> num1;
	cout <<"Enter another number : ";
	cin >> num2;
	//we can do the output in two different ways : either through a variable or cout
	sum = num1 + num2 ;
	cout<<"\nThe sum of the two numbers = " << sum ;
	return 0;
	}
