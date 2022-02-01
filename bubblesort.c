/* Bubble Sorting 
 * Author : Aswin Lal M
 * Roll : 320
 * Experiment no : xx
 */

#include <stdio.h>
int main()
{
	int n, i, temp,len;
	printf("Enter the value of n : ");
	scanf("%d", &n);

	//Initiating array
	int array[n];
	printf("Enter the elements in the array\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	//Before sorting
	printf("Before Sorting\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", array[i]);
	}

	//bubble sorting
	//To shrink the size of the array after each pass
	len =n;	
	while(n>1){
		for(i=0;i<n-1;i++){
			if(array[i]>array[i+1]){ //comparing adjacent element
				temp = array[i];	//swapping
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
		n = n-1; //shrinking
	}

	printf("\nAfter Sorting\n");
	for (i = 0; i < len; i++)
	{
		printf("%d\t", array[i]);
	}

	printf("\n");
	return (0);
}
