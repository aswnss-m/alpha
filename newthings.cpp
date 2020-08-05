#include <iostream>
#include <ctime>
#include <cstdlib>
//#include "phone.h"
using namespace std;

long long int make_num(int starting_two_numbers=99)
{
	srand(time(0));
	int i,phone_number[10];
    long long int ph=0;
	for(i=1;i>=0;--i) // To define the starting two numbers as user inputed
       {
			phone_number[i]= starting_two_numbers % 10;
            starting_two_numbers = starting_two_numbers/10; 
            }
    for (i=2;i<10;i++) // randomosing the numbers from 3rd number onwards
			{phone_number[i] = (rand() % 9) + 1;} 
	for (i=0;i<10;++i)  //output the numbers
	{	//std::cout<<phone_number[i];
		ph=10*ph + phone_number[i];     
		}
	return ph;
	}
int main()
{
	int ch,x;
	std::cout << "\nHow many numbers do you want : " ;
	std::cin >> ch ;
	std::cout << "\nWhat should be the starting two digits : ";
	std::cin >> x;
	while (x>0) { 
 	std::cout << make_num(x);
 	--x
	}
	return 0;
	}
