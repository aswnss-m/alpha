#include <iostream>
using namespace std;
class digit{
	private :
	int sum = 0 ,number;
	public :
	digit(int alpha){
		number = alpha;
		}
	int sum_of_digits();
	};
int main()
{
	int data;
	cout<<"\nEnter a number : ";
	cin>> data;
	
	digit one(data);
	cout << "\n the sum of the digit : " << one.sum_of_digits();
	}

int digit :: sum_of_digits()
{
	
	int num = number;
	while (num != 0)
	{
		sum = sum + num % 10; // Add the reminder to the sum
		num = num /10 ; // our next number is the quotient
		}
	return sum;
	}
