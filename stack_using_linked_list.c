#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
} node;

// HEAD node ( global variable )
node *head = NULL;

// Create new node function
node *getnode()
{
    struct node *new = (node *)malloc(sizeof(node));
    return new;
}


//Insert at the end
void insertEnd(int data)
{
    // creating new node and temp node
    node *new = getnode();
    node *temp = getnode();

    //getting the current last node
    temp = head;
    if(head != NULL){
        while (temp->link != NULL)
            {
                temp = temp->link;
            } // now temp hold the last node address
    }
    //linking the last node with new node
    temp->link = new;


    // setting the data of the new node
    new->data = data;
    //setting the new node as last node
    new->link = NULL;
}

//Insert in the middle

int deleteEnd()
{
    node *new = getnode();
    node *temp = getnode();
    node *temp2 = getnode();
    int data;

    //getting the current last node
    temp = head;
    while (temp->link != NULL)
    {
        temp2 = temp;
        temp = temp->link;
    } // now temp hold the last node address temp2 has second last

    //second last node is made as the last
    temp2->link = NULL;

    new = temp;
    data = new->data;
    free(new);
    return data;
}
void printList()
{
    node *temp = getnode();
    temp = head;
    printf("[ head ]");
    while (temp!= NULL)
    {
        printf("-->[ %d ]", temp->data);
        temp = temp->link;
    }
    printf("[/]");
}
int isempty(){
    if(head == NULL){
        return 1;
    }
    return 0;
}
int main()
{
    int opt,val,popped;

    while(1){
        printf("Press CTRL+C To Quit");
        printf("\n1.Push\n2.Pop\3.Display");
        printf("Enter option : ");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
            printf("Enter value to push : ");
            scanf("%d",&val);
            insertEnd(val);
            printf("\npushed\n");
            break;
        case 2:
            if(!isempty()){
                popped = deleteEnd();
                printf("\nPopped : %d\n",popped);
            }
            else{
                printf("\nSTACK UNDERFLOW\n");
            }
            break;
        case 3:
            printList();
            break;
        default:
            printf("wrong input");
        }
    }
    return 0;
}