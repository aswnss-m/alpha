#include <iostream>
using namespace std;
int main()
{
	int num ,sum = 0;
	cout<<"\nEnter a number : ";
	cin >> num ;
	while(num != 0)
	{
		sum = sum + (num % 10);
		num = num / 10;
		
		}
	cout<<"\n The sum of the digits = "<<sum;
	return 0;
	}
