#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int queue_array[MAX];
int rear = -1;
int front = -1;

void display()
{
    int i;
    if(front == -1)
        printf("queue is empty \n");
    else
{
    printf("queue is: \n");
    for(i=front;i<=rear;i++)
        printf("%d",queue_array[i]);
        printf("\n");
}
}

int main()
{
        int choice;
        while(1)
        {
            printf("1.insert\n");
            printf("2.Delete\n");
            printf("3.Display\n");
            printf("4.Exit\n");
            printf("Enter your choice :");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                insert();
                break;
                case 2:
                delete();
                break;
                case 3:display();
                break;
                case 4:exit(1);
                default:
                printf("invalid choice\n");
            }
        }
}
void insert()
{
    int a;
    if(rear == MAX-1)
    printf("Queue Overflow\n");
    else
    {
        if(front == -1)
        front = 0;
        printf("Insert the element in queue:");
        scanf("%d",&a);
        rear = rear + 1;
        queue_array[rear] = a;
    }
}
void delete()
{
    if(front ==-1|| front> rear)
    {
        printf("queue underflow\n");
        return;
    }
    else
    {
        printf("deleted elemet is:%d\n",queue_array[front]);
        front =front + 1;
    }
}
    

    
