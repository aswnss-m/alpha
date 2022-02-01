#include<stdio.h>
#include<conio.h>
void main()
{
int A[50],B[50],C[50],m,n,i,j,k=0;
clrscr();
printf("enter number of elements of first array: ");
scanf("%d",&m);
printf("enter the elements  of the first array: ");
for(i=0;i<m;i++)
{
scanf("%d",&A[i]);
}
printf("enter number of elements of second array: ");
scanf("%d",&n);
printf("enter the elements of the second array: ");
for(i=0;i<n;i++)
{
scanf("%d",&B[i]);
}
i=j=0;
while(i<m && j<n)
{
    if(A[i]<B[j])
    {
    C[k]=A[i];
    i++;
    }
    else
    {
    C[k]=B[j];
    j++;
    
    }
k++;
}
if(i>=m)
{
while(j<n)
{
C[k]=B[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
C[k]=A[i];
i++;
k++;
 }
 }

printf("The merged array is: ");
for(i=0;i<m+n;i++)
{
printf(" %d\t ",C[i]);
}
getch();
}