#include <stdio.h>
typedef struct stack{
    int top;
    char arr[20];
}STACK; //STACK => struct stack
 
// required functions
int isoperand(char *z);
void push(STACK *s,char e);
void pop(STACK *s);
char top(STACK *s);
int isp(char x); //instack priority
int icp(char x); //incoming priority

int main(){             
    int i;
    STACK s ={-1}; //structure default initialisation
    char exp[20],*e;
    printf("Enter the expression : ");
    fgets(exp,20,stdin);
    e = exp;
    
    while(*e != '\0'){
        
        if(isoperand(e)){
            printf("%c",*e);
        }
        else if(*e==')'){
            while(top(&s) != '(')
                pop(&s);
             pop(&s);//to delete ( from stack
        }
        else {
            while(isp(top(&s)) >= icp(*e)){
                pop(&s);
            }
            push(&s,* e);
        }
        e++; //next charactor
    }
    printf("\n");
    return 0;
}

// function definitions
int isoperand(char *z){
    if (*z>='A' && *z<='Z')
        return 1;
    else if(*z>= 'a' && *z<='z')
        return 1;
    else
        return 0;
}
int isp(char e){
    if (e=='+' || e=='-')
        return 2;
    else if(e=='*' || e=='/')
        return 5;
    else if(e=='(')
        return 0;
    else
        return -1; // need to check 
}
int icp(char e){
    if (e=='+' || e=='-')
        return 3;
    else if(e=='*' || e=='/')
        return 6;
    else if(e=='(')
        return 9;
    else
        return 1; // need to check  
}
void push(STACK *s,char e){
    s->arr[++s->top] = e;
}
void pop(STACK *s){
    char c =s->arr[s->top--];
    if( c != '(')
        printf("%c",c);
    
}
char top(STACK *s){
    return (s->arr[s->top]);
}

// a*(b+c)
// a
