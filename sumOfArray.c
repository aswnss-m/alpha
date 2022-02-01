/* Program to find sum and average of an array 
 * Autho : Aswin Lal M
 * Roll no : 320
 *Experinment no : xx
 */

#include <stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);

	// Getting the elements in the array
	int array[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;++i){
		scanf("%d",&array[i]);
	}
	//finding the sum of array
	for(i=0;i<n;++i){
		sum += array[i];
	}

	// printing the array
	for(i=0;i<n;++i){
		printf("%d\t",array[i]);
	}
	printf("\nSum = %d \n",sum);
	
	//Average of the array
	printf("Average = %d \n",sum/n);

	return(0);
}
