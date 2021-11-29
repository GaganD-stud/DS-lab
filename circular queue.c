#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;
int isFull();
int isEmp();
void enqueue(int);
int dequeue();
void disp();

int isFull()
{
    if((front == rear + 1) || (front == 0 && rear == SIZE - 1))
    return 1;
    return 0;
}

int isEmp()
{
    if(front == -1)
    return 1;
    return 0;
}
void enqueue(int ele)
{
    if(isFull())
    printf("\n Queue iss Full!! \n");
    else{
        if(front == -1)
        front = 0;
        rear = (rear + 1)%SIZE;
        items[rear] = ele;
        printf("\n inserted---> %d",ele);
    }
    
}

int dequeue()
{
    int ele;
    if(isEmp())
    {
        printf("\n Queue is empty !! \n");
        return(-1);
    }
    else
    {
        ele = items[front];
        if(front == rear)
        {
            front = -1;
            rear = -1;
        
        }
    else
    {
        front = (front + 1)%SIZE;
    }
    printf("\n deleted element -> %d \n",ele);
    return(ele);
    }
}
void disp()
{
    int i;
    if(isEmp())
        printf("\n Empty queue\n");
    else
    {
        printf("\n Front -> %d",front);
        printf("\n Items ->");
        for(i = front; i<=rear; i=(i + 1) % SIZE)
        {
            printf("%d",items[i]);
            printf("\n Rear -> %d \n",rear);
        
        }
    }
}

void main()
{
    int a,n=0;
    while(1)
    {
    printf("\n1:enqueue\n2:dequeue\n3:Display\n4:exit\n");
    printf("Enter the choice: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("\nenter the elemnt:\n");
                scanf("%d",&a);
                enqueue(a);
                break;
        case 2:a=dequeue();
                break;
        case 3:disp();
                break;
        case 4: exit(1);
                break;
        default: printf("invlaid choice\n");
        
    }
    
    
    
}
}
