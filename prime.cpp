#include <iostream>
using namespace std;
int main() {
	int n = 3 , f , i;
	
	while (n <= 50) {
		
		f= 0;
		for (i = 2; i < n/50; i++) {
			
			if(n%i == 0)
				f = 1;
			}
		if(f == 0)
			cout<< i;
			n++;
		
		}
	return 0;
	}
