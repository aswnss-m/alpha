// Program to add distance of two points
// Author : Aswin Lal
// Experiment : XX
// Date : 09-09-2021
#include <stdio.h>
// Defining structure
struct point{
  int x,y;
} point1, point2; // Declaring objectss

int main() {
  //Reading data to structure members
  printf("Input the coordinates of point 1 : ");
  scanf("%d",&point1.x); //obj.member
  scanf("%d",&point1.y);
  printf("Input the coordinates of point 2 : ");
  scanf("%d",&point2.x);
  scanf("%d",&point2.y);

  //Adding and printing distance
  printf("The distance %d %d\n",point1.x + point2.x , point1.y+point2.y );

  return 0;
}
