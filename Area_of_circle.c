/*Program to find the area of a circle with given radius*/
//Author : Aswil Lal M
//Roll NO : 320
//Experiment NO 1.2

#include<stdio.h>
int main(){
	float radius,area;
	printf("Enter the radius of the Circle : ");
	scanf("%f",&radius);

	area = 3.14*radius*radius;
	printf("Area = %f \n",area);
	return(0);
}
