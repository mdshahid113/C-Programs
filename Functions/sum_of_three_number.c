#include<stdio.h>
#include<conio.h>
int sum(int a,int b,int c);

int main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    int s=sum(a,b,c);
    printf("sum is %d",s);
    return 0;
}
int sum(int a,int b,int c){
return a+b+c;
}