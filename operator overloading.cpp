//operator overloading the operators in c++ can be modified to work on user defined objects 
//Thats mean as operator overloading
// :: scope resolution
// . the dot operator
// .* accesing the objects using pointor
//? : the terniary operator 
// the above operators cant be overloaded

#include <iostream>
using namespace std ;

class Myclass {
	public:
	Myclass(){}
	Myclass(int a) :var (a)
	{ }
	
	Myclass operator + (Myclass &obj)
	{
		Myclass temp; // variable of the class type
		temp.var = this->var + obj.var;  // this-> is the current obj and obj.var is the parameter object
		return temp
		 }
	};
int main()
{
	Myclass oj1(12),obj2(57);
	Myclass temp = obj1 + obj2;
	return temp.var;
	
	}
