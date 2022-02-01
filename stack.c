//Author Aswin Lal M 320
//
#include <stdio.h>
#define MAXSIZE 100
struct STACK{
    int arr[MAXSIZE];
    int top,size;
};
void create(struct STACK *,int size);
void push(struct STACK *,int val);
void pop(struct STACK *);
void display(struct STACK *);


int main(){
    int size,opt,val;
    struct STACK *s;
    printf("Enter the size : ");
    scanf("%d",&size);
    create(s,size);
    // MENU DRIVEN
    while(1){
        printf("\nPress Ctrl+C to exit the program!\n");
        printf("\n1.Push\n2.Pop\n3.Display\n");
        printf("\nEnter the Option Number :");
        scanf("%d",&opt);

        if(opt==1){
            if(s->top==size-1)
                printf("Stack Overflow!");
            else{
                printf("Enter the value to push : ");
                scanf("%d",&val);
                push(s,val);
            }
        }else if(opt==2){
            if(s->top==-1)
                printf("Stack Underflow");
            else
                pop(s);
        }else
            display(s);
    }
    return 0;
}
void create(struct STACK *s,int size){
    s->top = -1;
    s->size = size;
}
void push(struct STACK *s,int val){
    s->top=s->top+1;
    s->arr[s->top] = val;
    printf("\nPUSHED!!");
}
void pop(struct STACK *s){
    printf("\nPOPPED : %d",s->arr[s->top]);
    s->top=s->top-1;
}
void display(struct STACK *s){
    int i;
    printf("STACK : ");
    for(i=0;i<=s->top;i++){
        printf("\t%d\t",s->arr[i]);
    }
}