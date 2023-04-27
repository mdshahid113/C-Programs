#include<stdio.h>
#include<conio.h>     

void sum(int x,int y);
void diff(int x,int y);
void mult(int x,int y);
void divide(int x,int y);

int main()
{
    int x,y;
    printf("Enter two numbers\n");
    printf("-------------------\n");
    printf("Enter the first num\n");
    scanf("%d",&x);
    printf("Enter the second num\n");
    scanf("%d",&y);
    printf("-------------------\n");
    sum(x,y);
    diff(x,y);
    mult(x,y);
    divide(x,y);
    return 0;
}
void sum(int x,int y)
{
    int z;
    z=x+y;
    printf("sum is %d",z);
}
void diff(int x,int y)
{
    int z;
    z=x-y;
    printf("difference is %d\n",z);
}
void mult(int x,int y)
{
    int z;
    z=x*y;
    printf("multiply is %d\n",z);
}
void divide(int x,int y)
{
    int z;
    z=x/y;
    printf("divide is %d\n",z);
}
