/* Program to reverse a string using function
 * Author: Aswin Lal M
 * Experimrnt : XX
 * */
#include <stdio.h>
#include <string.h>
// Defining function
void rev_string(char s[]){
	int len,i,j;
	char temp;
	len = strlen(s);
	j = len -1;
	// swapping the lettgers back and forth
	for(i=0;i<len/2;i++){
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j--;
	}
}

int main(){
	char string[100];
	printf("Enter the string : ");
	scanf("%s",string);
	rev_string(string);
	puts(string);
	return 0;

}
