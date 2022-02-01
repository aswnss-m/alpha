/* Program to find wether a number is armstrong or not
 * Author: Aswin Lal M
 * Roll no : 320 
 * Experiment no : 3*/

#include <stdio.h>
#include <math.h>
int main(){
	
	int N,copy1,copy2,count,sum;
	printf("Enter the Number you want to check : ");
	scanf("%d",&N);
	
//Assigning the values
	copy1 = N;
	copy2 = N;
	sum = 0;
	count = 0;

//Calculating the length
	while (copy1 !=0){
		count++;
		copy1 = copy1/10;
		}

//Armstrong calculation
	while (N != 0){		
		sum = sum + pow(N%10,count);
		N = floor(N/10);
	}

//verification
	if (sum == copy2){
		printf("Armstrong number\n");
	} else{
		printf("Not Armstrong number\n");
	}

	return (0);		
}
