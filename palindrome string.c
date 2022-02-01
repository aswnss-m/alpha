/* To check whether a given string is palindrome 
 * Author : Aswin Lal M
 * Roll no : 320
 *Experinment no : xx
 */

#include <stdio.h>
int main(){
    int len=0,i,j,flag=0;
    char arr[100];

    printf("Enter the string : \n");
    scanf("%s",arr);
    for(i=0;arr[i]!='\0';i++){
        len++;
    }
    j = len;
    for(i=0;i<=len/2;i++){ //head of the string
        if (arr[j-1] != arr[i]){
            flag = 1;
            break;
        }
        --j; // tail of the string
    }
    if(flag == 1){
        printf("Not a palindrome !\n");
    }
    else{
        printf("Palindrome !\n");
    }
return 0;
}