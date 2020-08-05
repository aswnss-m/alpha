#include <iostream>
#include <cstdio>
using namespace std;
int even_array(int arr[],int p);
int main()
{
	int n,i;
	std::cout << "Enter the size of array : ";
	std::cin >> n;
	inr num[n];
	for (i=0;i<n;i++)
	 {
		 std::cout<<"\nEnter the "<<i<<" th element of array : ";
		 std::cin >> num[i];
		 }
	even_array(num,n); //passing array of size n
	return 0;
	}

int even_array(int arr[],int p) //function definition for passing array of size p 
{
	int i,ln,j;
	for (i=0;i<p;i++)
		if (arr[i]%2==0) //countig the even numbers in the array
			ln++;
	int array[ln];
	for (i=0;i<ln;)//There is no iteration in this loop its given outside the loop 
		for(j=0;j<p;j++) //Traversing each element of the given array
			if (arr[j]%2==0) // checking whether the element is even or not
				{
					array[i]=arr[j]; //saving the even numbers in the new array 
					i++;
				}
	//dont know how to use return for passing an array
	for (i=0;i<ln;i++)
		std::cout<<"\t" << num[i];
	return 0;
	}
