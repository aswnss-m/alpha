#include <iostream>
using namespace std;
/* class data
{
  private :
    int ch,x,y;
  public :
     int area(int x, int y);n
     int area(int x);
}
int area(int x , int y)
{
}*/
void line(float x);
float area (float x,float y);
float area (float x);

int main() {
  float ch,x,y;
  line(23);
  std::cout << "Welcome To The Area calculator " << "\n\n";
  std::cout << " 1.Area of a rectangle \n\n 2. Area of a circle \n\n 3. Area of a triangle \n\n 4. Volume of a cone " << "\n\n";
  std::cout << "Enter the Option : " << '\t';
  std::cin >> ch;
  if (ch==1||ch==3) {
    std::cout << "Enter the Length and breadth/height :" << '\t';
    std::cin >> x>>y;
    std::cout << "The area of the shape " << '\t'<<area(x,y)<<" sq units\n\n"; //Calls the area funtion with two variable
  }
  else if (ch==2) {
    std::cout << "Enter the radius of the circle : " << '\t';
    std::cin >> x;
    std::cout << "The Area of the circle : " << '\t'<< area(x)<<" sq units\n\n"; //Calls the area function with one variable
  }
  else if (ch==4) {
    std::cout << "Enter the radius and  height : " << '\t';
    std::cin >> x>>y;
    std::cout << "The area of the shape  " << '\t'<< 3.14/3*area(x)*y << " cubic units \n\n" ;
  }
  else{
	std::cout<<"You have entered the wrong option number !! \n\n";
  }
  line(23);
  return 0;
}
void line(float x) {
  int i;
  for (i=0;i<=x;++i)
   std::cout << "*****";
  std::cout <<"\n";
 }
float area(float x,float y)
{
  float temp;
  temp = x*y;
  return temp;
}
float area(float x)
{
  float temp ;
  temp = 3.14 * x * x;
  return temp;
}
