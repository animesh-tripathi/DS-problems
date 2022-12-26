#include <stdio.h>
#include<stdlib.h>
#define MAX 10
void Enqueue();
void display_Q();
void DeQueue();
struct queue
{
    int que[MAX];
    int front;
    int rear;
}qp;
void Enqueue()
{
    int ele;
    printf("Enter an element to insert:");
    scanf("%d",&ele);
    if(qp.rear==-1&&qp.front==-1)
    {
        qp.front=0;
        qp.rear=0;
        qp.que[qp.rear]=ele;
    }
    else if(qp.rear==MAX-1)
    {
        printf("\n overflow condition\n");
        return;
    }
    else
    {
        qp.rear++;
        qp.que[qp.rear]=ele;
    }
    printf("\nItem inserted..");
}
void display_Q()
{       int i;
    if(qp.front==-1)
    {
        printf("\nQUEUE is Empty.");
     }
     else
        printf("Queue is:\n");
    for(i=qp.front;i<=qp.rear;i++)
    {
        printf("%d",qp.que[i]);
    }

}
void DeQueue()
{
    int ele;
    if(qp.front==-1)
    {
        printf("underflow\n ");
        return;
    }
    else if(qp.front==qp.rear)
    {
        ele=qp.que[qp.front];
        qp.front=-1;
        qp.rear=-1;
    }
    else
    {
        ele=qp.que[qp.front];
        printf("%d",ele);
        qp.front++;
    }
    printf("\nItem removed : %d.",ele);
}
void main(){
    int choice;
    qp.front=-1;
    qp.rear=-1;
while(1){
    printf("\n 1.Insert element to queue \n");
     printf("2.Display all elements of queue \n");
    printf("3.Delete element from queue \n");
    printf("4.Quit \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
          Enqueue();
            break;
        case 2:
            display_Q();
            break;
        case 3:
            DeQueue();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("\nInvalid choice\n");
            break;
}
}
}
