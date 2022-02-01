/* Program to concatinate two strings
 * Author : Aswin Lal M
 * Roll no : 320
 *Experinment no : xx
 */
#include<stdio.h>
int main(){
    char arr1[100],arr2[100],arr3[200];
    int i,head=0;
    printf("Enter first string : ");
    fgets(arr1,100,stdin);
    printf("Enter second string : ");
    fgets(arr2,100,stdin);

    for(i=0;arr1[i]!='$';i++){
        arr3[i] = arr1[i];
        head++;
    }
    for(i=0;arr2[i]!='$';i++){
        arr3[head] =arr2[i];
        head++;
    }
    arr3[head]='\0';
    printf("%s\n",arr3);
    return 0;
}
