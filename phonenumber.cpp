#include <iostream>
#include <cstdlib> // to use random function
#include <ctime>  // to include time function
using namespace std;
void RandomPh(int x);
int main()
{
  srand(time(NULL)); // To create truly random numbers
  int ch,i;
  int array[10];
//  unsigned int ph=0; was suppose to store the phone number
  std::cout << "Select the sim : " << '\n';
  std::cout << "\t 1.Idea\n\t 2.bsnl\n\t 3.airtel" << "\n\t";
  std::cin >> ch;  // to define the starting two numbers
  switch (ch) {
    case 1: array[0]=9;
            array[1]=9;
            break;
    case 2: array[0]=9;
            array[1]=4;
            break;
    case 3: array[0]=7;
            array[1]=9;
            break;
    default: std::cout << "Didn't match any of the deafult option" << "\n\n";
            std::cout << "Please enter the starting 2 digits of the number you want :  " ;
            std::cin >> ch;
            for(i=1;i>=0;--i) // To define the starting two numbers as user inputed
              {
                array[i]= ch % 10;
                ch = ch/10; }
  }
std::cout<<"How many Random numbers do you want ? : " ;
std::cin >>ch; //using only single variable (multipurpose) saves memory
while(ch>0) {
	for (i=2;i<10;i++) // randomosing the numbers from 3rd number onwards
			{array[i] = (rand() % 9) + 1;}
	std::cout<<"\nRandom numbers : ";
	for (i=0;i<10;++i)  //output the numbers
		std::cout<<array[i];
	--ch;
   }
return 0 ;
}
void RandomPh(int ch)
{
	for(i=1;i>=0;--i) // To define the starting two numbers as user inputed
       {
			array[i]= ch % 10;
            ch = ch/10;
            }
    for (i=2;i<10;i++) // randomosing the numbers from 3rd number onwards
			{array[i] = (rand() % 9) + 1;}
	for (i=0;i<10;++i)  //output the numbers
		std::cout<<array[i];
	}
