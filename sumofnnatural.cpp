#include <iostream>
using namespace std;
int main()
{
	bool x;
	x = true ;
	//To find the sum of N natural numbers
	int sum = 0,N ,i ;
	cout << "Enter a limit : " ;
	cin >> N ;
	for (i = 1 ; i <= N ; i++)
	{
		sum = sum + i;
		}
	cout<<"The sum of natural numbers upto " << N << " = "<<sum;
	cout<<"\n"<<x;
	return 0;
	}
