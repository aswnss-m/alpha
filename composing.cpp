#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
class Birthday {
 Birthday(int m,int d,int y)
  :month(m),day(d),year(y)
  {

  }
  public:
    void printDate()
    {
      std::cout <<month<<day<<year;
    }


  private: {
    int month;
    int day;
    int year;
  }
};
class Person {
 public:
  Person(string n, Birthday b)
  : name(n),
  bd(b)
  {
  }
  void printInfo()
  {
   std::cout << name << endl;
   bd.printDate();
  }
 private:
  string name;
  Birthday bd;
};
int main()
{
  Person x;
  x.printInfo();
  return 0;
}
