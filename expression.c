/* Program to calculate the result of ((a -b / c * d + e) * (f +g))*/
// Author : Aswin Lal M
// Roll No : 320
// Experiment : 1.3
#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g,Result;
    printf("Enter the values of a,b,c,d,e,f,g \n");
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    Result = ((a -b / c * d + e) * (f +g));

    printf("Result = %d \n", Result);
    return(0);
}
