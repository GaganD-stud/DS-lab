#include<stdio.h>
long int fact(int n)
{
    if(n>=1)
        return n*fact(n-1);
    else
        return 1;
}
int main()
{
    int n;
    printf("enter the integer: ");
    scanf("%d",&n);
    printf("factorial of %d = %ld",n,fact(n));
    return 0;
}