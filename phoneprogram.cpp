#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
/* This program is to output a random phone number 
 * To Use the function please follow the following steps 
 * 
 * step 1 : copy the file phone.h to the isl folder of gcc compiler 
 *  in my case it was (C:\msys64\mingw64\include\isl)
 * 
 * step 2 : Save and refreash
 * 
 * step 3 : In C++ program which you want to use the fuction Use #include "phone.h"
 * 
 * step 4 : The funtion used to output the number is make_num($$); 
 * 			its a void function so no need to use cout it will automatically output 
 * 			We need to pass the starting two number of the phone number deafult its 99
 * 
 * ex : 
 * 			make_num(94);
 * 
 * output :  9434564776
 * */


long long int make_num(int lim,int starting_two_numbers=99)
{
	srand(time(0));
	int i,phone_number[10];
	int j;
	unsigned long long int ph=0;
	for(j=0;j<=lim;j++){
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
	return 0;
}
	
int main()
{
	srand(time(NULL));
	int ch,n;
	std::cout<<"Enter the starting two digits of the number : ";
	std::cin>>ch;
	std::cout<<"\nEnter the limit : ";
	std::cin>>n;
	std::cout<<"\n"<<make_num(n,ch);
	return 0;
	}

