// Program to find the largest among three numbers
// Author : Aswin Lal M
// Roll No : 320
// Experiment No : 2.1

#include <stdio.h>
int main()
{
    int a, b, c, largest;
    printf("Enter three numbers : \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            largest = a;
        }
        else
        {
            largest = c;
        }
    }
    else if (b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    printf("Largest : %d\n", largest);
    return 0;
}
