#include<stdio.h>
#include<conio.h>
int fib(int n)
{
    if(n<=1)
        return n;
    else
        return (fib(n-1) + fib(n-2));
}
int main()
{
    int n;
    printf("enter the integer : ");
    scanf("%d",&n);
    printf("\n%d",fib(n));
    getch();
    return 0;
}
