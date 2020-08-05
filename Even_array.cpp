#include <cstdio>
#include <iostream>
using namespace std;
int getarray(int n);
int main ()
{
	int i,j,n,ln;
	std::cout<<"This program is to modify a given array into an array of even / odd number " << endl << endl;
	std::cout << "\nEnter a number : " ; //To decide the size of array
	std::cin >> n;
	int arr[n];
	std::cout<<"\nEnter the elements into the array : ";
	for (i=0;i < n ; ++i) //input the array
	 {
		std::cin >> arr[i];
		if (arr[i]%2==0)
			ln++;
		}
	std::cout <<endl<<endl<< "The Original array : \t";
	for (i=0;i < n ; ++i) 
	  {
		std::cout << arr[i] << '\t';
	}
/*	for(i=0;i<n;i++)
		std::cout << arr[i]%2 <<'\t';
*/
	int arr2[ln],arr3[n-ln];
	for (j=0;j<ln;) 
	{
		for (i=0;i<n;i++)
			{
				if (arr[i]%2==0)
				{
					arr2[j] = arr[i];
					j++;
					}
				}
				
		}
	
	for (j=0;j<(n-ln);) 
	{
		for (i=0;i<n;i++)
			{
				if (arr[i]%2==1)
				{
					arr3[j] = arr[i];
					j++;
					}
				}
	 }
	
	std::cout<<endl<<endl<<"The Modified Even Array : \t";
	
	for(j=0;j<ln;j++)
		std::cout<<arr2[j]<<"\t";
	
	std::cout<<endl<<endl<<"The Modified Odd Array : \t";
	
	for(j=0;j<(n-ln);j++)
		std::cout<<arr3[j]<<"\t";
	
	return 0;
	}
