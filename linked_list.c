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
//Insert at the begining
void insertFirst(int data)
{
    // creating new node
    node *new = getnode();

    // setting the data of the new node
    new->data = data;

    //linking the previos first node with new node
    new->link = head;

    //linking the head node with new node
    head = new;
}

//Insert at the end
void insertEnd(int data)
{
    // creating new node and temp node
    node *new = getnode();
    node *temp = getnode();

    // setting the data of the new node
    new->data = data;
    //setting the new node as last node
    new->link = NULL;

    //getting the current last node
    if(head==NULL){
        head = new;
        return;
    }

    temp = head;
    while (temp->link != NULL)
        {
            temp = temp->link;
        } // now temp hold the last node address

    //linking the last node with new node
    temp->link = new;

}

//Insert in the middle
void insertMiddle(int data, int key)
{
    int flag = 1;
    //getting the new node and temp node
    node *new = getnode();
    node *temp = getnode();

    //setting the data part of new node
    new->data = data;

    //finding the key node
    temp = head;
    while (temp->link != NULL)
    {
        if (temp->data == key)
        {
            flag = 0;
            break;
            //temp now has the key node address
        }
        temp = temp->link;
    }
    if (flag == 1)
    {
        printf("Node not found");
        return;
    }

    //swaapping the links
    new->link = temp->link;
    temp->link = new;
}
//delete from front
int deleteFirst()
{
    int data;
    node *new = getnode();
    //point to the first node
    new = head;

    //head points to the second node
    head = new->link;

    //retrieving data
    data = new->data;

    //freeing the node memory
    free(new);
    return data;
}
// int deleteEnd()
// {
//     node *new = getnode();
//     node *temp = getnode();
//     node *temp2 = getnode();
//     int data;

//     //getting the current last node
//     temp = head;
//     while (temp->link != NULL)
//     {
//         temp2 = temp;
//         temp = temp->link;
//     } // now temp hold the last node address temp2 has second last

//     //second last node is made as the last
//     temp2->link = NULL;

//     new = temp;
//     data = new->data;
//     free(new);
//     return data;
// }
void deleteEnd()  
{  
    node *temp = getnode();
    node *temp1 = getnode();
    if(head == NULL)  
    {  
        printf("\nlist is empty");  
        return;
    }  
    else if(head->link == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
          
    else  
    {  
        temp = head;   
        while(temp->link != NULL)  
        {  
            temp1 = temp;  
            temp = temp ->link;  
        }  
        temp1->link = NULL;  
        free(temp);  
        printf("\nDeleted Node from the last ...\n");  
    }     
} 
void deleteMiddle(int key)
{
    int flag = 1, data;
    //getting the new node and temp node
    node *new = getnode();
    node *temp = getnode();
    node *temp2 = getnode();

    //finding the key node
    temp = head;
    while (temp->link != NULL)
    {
        if (temp->data == key)
        {
            flag = 0;
            break;
            //temp now has the key node address
        }
        temp2 = temp;
        temp = temp->link;
    }
    if (flag == 1)
    {
        printf("Node not found");
        return;
    }
    new = temp;
    temp2->link = new->link;
    data = new->data;
    free(new);
    printf("deleted");
    // return data;
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
int main()
{
    while (1)
    {
        int opt, menu, data, key,deleted;
        printf("\nPress CTRL+C to quit\n");
        printf("\n1.Insert\n2.Delete\n3.Print List");
        printf("\nEnter Option : ");
        scanf("%d", &opt);
        switch(opt)
        {
        case 1:
            printf("\nEnter data : ");
            scanf("%d", &data);
            printf("\n1.Insert Front\n2.Insert End\n3.Insert Middle");
            printf("\nEnter Menu : ");
            scanf("%d", &menu);
            switch (menu)
            {
            case 1:
                insertFirst(data);
                break;
            case 2:
                insertEnd(data);
                break;
            case 3:
                printf("Enter Key : ");
                scanf("%d", &key);
                insertMiddle(data, key);
                break;
            default:
                printf("Something went wrong");
            }
            break;
        case 2:
            printf("\n1.Delete Front\n2.Delete End\n3.Delete Middle");
            printf("\nEnter Menu : ");
            scanf("%d", &menu);
            switch (menu)
            {
            case 1:
                deleted = deleteFirst();
                
                break;
            case 2:
                deleteEnd();
                break;
            case 3:
                printf("Enter Key : ");
                scanf("%d", &key);
                deleteMiddle(key);
                
                break;
            default:
                printf("Something went wrong");
            }
            break;
        case 3:
            printList();
            break;
        default:
            printf("wrong option !");
        }
    }
    return 0;
}