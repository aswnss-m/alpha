// Using Union
// Author : Aswin Lal
// Experiment: XX
#include <stdio.h>
// Defining union
union Person{
  char name[32],HouseName[30],CityName[30],State[20],pincode[7];
} p1; // obj

int main() {
// Reading and displaying  name
  printf("Enter your name : ");
  fgets(p1.name,32,stdin);
  puts(p1.name);
// Reading and displaying House Name
  printf("Enter your House name : ");
  fgets(p1.HouseName,30,stdin);
  puts(p1.HouseName);
// Reading and displaying City Name
  printf("Enter your CityName : ");
  fgets(p1.CityName,32,stdin);
  puts(p1.CityName);
// Reading and displaying State name
  printf("Enter your State : ");
  fgets(p1.State,20,stdin);
  puts(p1.State);
// Reading and displaying Pincode
  printf("Enter your pincode : ");
  fgets(p1.pincode,7,stdin);
  puts(p1.pincode);

  return 0;
}
