#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void insert();
void display();
void delete();
struct queue
{
    int que[MAX];
    int front;
    int rear;
}qp;
void insert()
{
    int ele;
    printf("Enter an element\n");
    scanf("%d",&ele);
    if(qp.front==(qp.rear+1)%MAX)
    {
        printf("Overflow\n");
        return;
    }
    if(qp.front==-1)
    {
        qp.front=0;
        qp.rear=0;
        qp.que[qp.rear]=ele;
    }
    else{
        qp.rear=(qp.rear+1)%MAX;
    qp.que[qp.rear]=ele;
}
}
void display()
{
     int i;
    if(qp.front==-1 && qp.rear==-1)
    {
        printf("\nQUEUE is Empty.");
     }
     else
     {
    for(i=qp.front;i<=qp.rear;i=(i+1)%MAX)
    {
        printf("%d\n",qp.que[i]);
    }
    }
}
void delete()
{
 if(qp.front==-1)
 {
     printf("Overflow\n");
     return;
 }
 int k=qp.que[qp.front];
 if(qp.front==qp.rear)
 {
     qp.front=-1;
     qp.rear=-1;
 }
 else{
    qp.front=(qp.front+1)%MAX;
 }
}
int main()
{
    int choice;
    qp.front=-1;
    qp.rear=-1;
while(1)
{
    printf("\n 1.Insert element to queue \n");
     printf("2.Display all elements of queue \n");
    printf("3.Delete element from queue \n");
    printf("4.Quit \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
          insert();
            break;
        case 2:
            display();
            break;
        case 3:
            delete();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("\nInvalid choice\n");
            break;
            }
    }
            return 0;
}





