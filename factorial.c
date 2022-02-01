/* Program : To find the factorial of the given number
 * Author : Aswin Lal M
 * Experiment : XX
 * */
#include <stdio.h>
int factorial_rec(int m){
	if(m==1 || m==0){
		return 1;
	}
	else {
		return m*factorial_rec(m-1);
	}
	
}
int factorial_loop(int num){
	int fact=1,i;
	if(num==0){
		fact =1;
	}
	else{
		for(i=num;i>=1;i--){
			fact=fact*i;
		}
	}
	return fact;
}
int main(){
	int num,fact;
	printf("Enter the number : ");
	scanf("%d",&num);
	

	// With loop function
	fact = factorial_loop(num);
	printf("With Loop: \n");
	printf("%d! = %d\n",num,fact);


	//With recursive function
	fact = factorial_rec(num);
	printf("With Recursive function : \n");
	printf("%d! = %d\n",num,fact);

	return 0;
}
