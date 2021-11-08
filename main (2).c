#include<stdio.h>
#include<conio.h>
void tow(int n,char fpeg,char tpeg,char apeg)
{
    if(n == 1)
    {
            printf("\n move disk 1 form peg %c to peg %c",fpeg,tpeg);
            return;
    }
    else
    {
        tow(n-1,fpeg,apeg,tpeg);
        printf("\n move disk %d from peg %c to peg %c",n,fpeg,tpeg);
        tow(n-1,apeg,tpeg,fpeg);
    }
}
int main()
{
    int n;
    printf("enter the number of disks: ");
    scanf("%d",&n);
    printf("the sequence of moves involved in the tower of hanoi are :\n");
    tow(n,'A','C','B');
    return 0;

}