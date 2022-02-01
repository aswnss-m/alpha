/* To count the vowels consonants and spaces 
 * Author : Aswin Lal M
 * Roll no : 320
 *Experinment no : xx
 */
#include<stdio.h>
int main(){
    int i,vc=0,cc=0,sc=0; //vowel count , consonant count , space count
    char arr[100];
    printf("Enter the string : ");
    fgets(arr,100,stdin);
    for(i=0;arr[i]!='\0';++i){
        switch (arr[i])
        {
        case ' ':
            sc++;
            break;
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            vc++;
            break;
        case '\n':
            break;
        default:
            cc++;
            break;
        }
    }
    printf("vowel count : %d\nconsonant count: %d\nspace count: %d\n",vc,cc,sc);
    return 0;
}