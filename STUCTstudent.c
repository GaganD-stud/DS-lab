#include<stdio.h>
#include<conio.h>
#define SIZE 100
struct student
{
int id;
int age;
int marks;
};
void input(struct student *s1);
void output(struct student *s1);
void input(struct student *s1)
{
	printf("enter the id\n");
	scanf("%d",&s1->id);
	printf("enter the age\n");
	scanf("%d",&s1->age);
	printf("enter the marks\n");
	scanf("%d",&s1->marks);
}
void output(struct student *s1)
{
	printf("student details are:\n");
	printf("ID - %d\t",s1->id);
	printf("Age - %d\t",s1->age);
	printf("Marks - %d\t",s1->marks);
}
int main()
{
	struct student  s[SIZE];
	int n,i;
	clrscr();
	printf("Enter the number of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		input(&s[i]);
	}
	for(i=0;i<n;i++)
	{
		output(&s[i]);
	}
	getch();
	return 0;
}
