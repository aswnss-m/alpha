#include <iostream>
using namespace std;
int main()
{
	//This program will return the name of the month when we enter a number bet 1 ~ 12
	int x;
	cout<<"\n Welcome to the month name teller \n\n";
	cout << "Enter a number for  1 ~ 12 : ";
	cin >> x;
	switch (x)
	{
		case 1: 
			cout<<"The 1st month is January ! ";
			break;
		case 2: 
			cout<<"The 2nd month is February ! ";
			break;
		case 3: 
			cout<<"The 3rd month is March! ";
			break;
		case 4: 
			cout<<"The 4th month is April! ";
			break;
		case 5: 
			cout<<"The 5th month is May! ";
			break;
		case 6: 
			cout<<"The 6th month is June! ";
			break;
		case 7: 
			cout<<"The 7th month is July ! ";
			break;
		case 8: 
			cout<<"The 8th month is August! ";
			break;
		case 9: 
			cout<<"The 9th month is September! ";
			break;
		case 10: 
			cout<<"The 10th month is  October! ";
			break;
		case 11: 
			cout<<"The 11th month is November! ";
			break;
		case 12: 
			cout<<"The 12th month is December! ";
			break;
		default:
			cout<<"invalid input";
		};
	
	return 0;
	}
