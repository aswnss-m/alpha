// Program to check wether the number is prime or not
// Author : Aswin Lal M
// Roll no : 320
// Experiment : 2.2

#include <stdio.h>
int main(){
	int num,is_prime = 1,i=2;

	printf("Enter the number : ");
	scanf("%d",&num);

	while(i<=num/2 && is_prime==1){
		if (num%i==0){
			is_prime = 0;
		}
		i++;
	}

	if(is_prime==1){
		printf("Prime\n");
		} else{
			printf("Not Prime\n");
		}
	
	return 0;
}
