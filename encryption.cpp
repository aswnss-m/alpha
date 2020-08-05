#include <iostream>
using namespace std;
int main() {
  long int numcpy,number,encrypted_value=0;
  int temp=0;
  std::cout << "Enter a Number : " << '\n';
  std::cin >> number;
  numcpy = number;
  while(numcpy != 0)
    {
      temp = numcpy % 10 ;
        if (temp == 0)
          encrypted_value = (encrypted_value * 10) + 5 ;
        else if (temp == 5)
            encrypted_value = (encrypted_value * 10) + 0 ;
        else if (temp == 1)
            encrypted_value = (encrypted_value * 10) + 6 ;
        else if (temp == 6)
            encrypted_value = (encrypted_value * 10) + 1 ;
        else if (temp == 2)
            encrypted_value = (encrypted_value * 10) + 7 ;
        else if (temp == 7)
            encrypted_value = (encrypted_value * 10) + 2 ;
        else if (temp == 3)
            encrypted_value = (encrypted_value * 10) + 8 ;
        else if (temp == 8)
            encrypted_value = (encrypted_value * 10) + 3 ;
        else if (temp == 4)
            encrypted_value = (encrypted_value * 10) + 9 ;
        else if (temp == 9)
            encrypted_value = (encrypted_value * 10) + 4 ;
      numcpy /= 10;

    }
  std::cout << "\nThe Encrypted number = " <<encrypted_value << '\n';
  return 0;
}
