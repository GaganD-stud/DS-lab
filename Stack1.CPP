#include <stdio.h>
#include <conio.h>
#include <process.h>

#define SIZE 10

int top = -1;
int s[10];
int item;

void push() 
{
  if(top == SIZE-1) {
  printf("\nStack Overflow");
  return;
}
 top++;
 s[top] = item;
}

int pop() {
 if(top == -1)
  return -1;
 return s[top--];
}

void display() 
{
 int i;
 if(top == -1) 
 {
  printf("\nStack is empty");
  return;
 }
 printf("\nContents of Stack:\n");
 for(i = top; i >= 0; i--)
  printf("%d ", s[i]);
}

void main() 
{
 int v;
 int c;
 clrscr();
 for(;;) 
 {
  printf("\n1:Push\n2:Pop\n3:Display\n4:Exit");\
  printf("\nEnter the Choice: ");
  scanf("%d", &c);
  switch(c) 
  {
   case 1: printf("\nEnter item to be inserted: ");
	   scanf("%d", &item);
	   push();
	   break;
   case 2: v = pop();
	   if(v == -1)
	    printf("\nStack is empty");
	    else
	     printf("\nItem deleted is %d\n", v);
	    break;
   case 3: display();
	   break;
   default: exit(0);
  }
 }
 getch();
}
