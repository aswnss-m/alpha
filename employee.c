// Program to print data of employee
// Author : Aswin Lal
// Experiment : XX
#include <stdio.h>
// Defining Structure
struct employee{
  char name[32];
  int id,salary;
}employees[10]; //array of structure

int main() {
  int n,i;
  printf("Enter the number of employees : ");
  scanf("%d",&n);
  // reading details of n employees
  for(i=0;i<n;i++){
    printf("Enter Id : ");
    scanf("%d",&employees[i].id); //obj.member
    printf("Enter Name : ");
    scanf("%s",employees[i].name);
    printf("Enter Salary : ");
    scanf("%d",&employees[i].salary);
  }
  printf("\nGiven Data\n");
  // Printing details of n employees
  for (i = 0; i < n; i++) {
    printf("\n");
    printf("Employee Id : %d\n",employees[i].id);
    printf("Name : %s\n",employees[i].name);
    printf("Salary : %d\n",employees[i].s alary);
  }
  return 0;
}
