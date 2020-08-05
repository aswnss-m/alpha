#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	bool run = true;
	while (run){
  srand(time(NULL));
  int ch,i;
  int array[10];
  int idea = 99 , bsnl = 94 , airtel = 79;
  std::cout << "Select the sim : " << '\n';
  std::cout << "\t 1.Idea\n\t 2.bsnl\t\n3.airtel" << '\n';
  std::cin >> ch;
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
            for(i=1;i>=0;--i)
              {
                array[i]= ch % 10;
                ch = ch/10; }
  }

  for (i=2;i<10;i++)
    array[i] = (rand() % 9) + 1;
std::cout << "Random number : ";
  for (i=0;i<10;++i)
    std::cout << array[i];
    int j;
    cin >> j;
    if (j == 0)
		run = false;
    }
return 0 ;
}
