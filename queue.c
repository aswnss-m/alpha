
#include <stdio.h>
#define MAX_SIZE 50

typedef struct QUEUE{
    int size;
    int front,rear;
    int arr[MAX_SIZE];
} queue;

// function declarations
void create(queue *q, int size);
void enqueue(queue *q,int item);
void dequeue(queue *q);
void display(queue *q);

int main(){

    queue q;
    int opt,item,size;
    printf("Enter the size of queue : ");
    scanf("%d",&size);
    create(&q,size);

    while(1){
        printf("\nPress CTRL+C to quit\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display");
        printf("\nEnter option no (1-3) : ");
        scanf("%d",&opt);

        switch(opt){
            case 1:
                    printf("Enter the item to enqueue: ");
                    scanf("%d",&item);
                    enqueue(&q,item);
                    break;
            case 2:
                    dequeue(&q);
                    break;
            case 3:
                    display(&q);
                    break;
            default:
                    printf("wrong input !!\n");
        }
    }
    return 0;
}

// function definitions
void create(queue *q,int size){
    q->size = size;
    q->front =-1;
    q->rear = -1;
}
void enqueue(queue *q,int item){
    if (q->rear == -1){
        q->front = 0;
        q->rear =0;
        q->arr[q->rear] = item;
    } else if (q->rear == q->size-1){
        printf("Queue is full\n");
    }else{
        q->rear += 1;
        q->arr[q->rear] = item;

    }
}
void dequeue(queue *q){
    if(q->front == -1 || q->front > q->rear){
        printf("Queue is empty\n");
        q->rear = -1;
        q->front = -1;
    }else{
        printf("Dequeue : %d",q->arr[q->front]);
        q->front += 1;
    }
}
void display(queue *q){
    int i;
    printf("QUEUE :\t");
    for(i=q->front; i<= q->rear;i++){
        printf("%d\t",q->arr[i]);
    }
}