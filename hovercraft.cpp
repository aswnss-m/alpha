#include <iostream>
using namespace std;
void intro()
{
	for(int i = 0;i <= 30 ; i++)
		cout<<"***";
	cout << "\n\nWelcome to the hovercraft profit calculator \n\n";
	}
class hovercraft{
	private :
		int stock, sales;
		int insurance = 1000000;
		float production_cost = 2000000;
		float market_cost = 3000000;
	public : 
		void get();
		void calc();
	};
int main()
{
	//Make a hovercraft profit or loss report
	/*It takes about 2000000 to make a hovercraft 
	 * market cost of the hovercraft is 3000000
	 * per month 1000000 goes to the insurance
	 * this month made 10 hovercraft 
	 * calculate the profit or loss of the bussiness*/
	 hovercraft one ;
	 intro();
	 one.get();
	 one.calc();
	return 0;
	}
void hovercraft ::get()
	{
		cout << "\nEnter the amount of stock : ";
		cin >>  stock;
		cout <<"\nEnter the number of sales : ";
		cin >>  sales;
			}
void hovercraft :: calc() 
	{
	if( sales <= stock){
		int production = stock * production_cost;
		int sales_cost = sales *  market_cost ;
		int allowance = sales_cost - production - insurance;
		if(allowance > 0)
			cout<<"We made a profit of " << allowance;
		else
			cout << "We lost " << allowance ;
		}
	else
		cout<<"The sales is greater than the stock we have !";
			
	}
