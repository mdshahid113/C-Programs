#include<stdio.h>
#include<conio.h>

int multiply(int x,int y);
int main(){
    int x,y;
    printf("Enter the first number\n");
    scanf("%d", &x);
    printf("Enter the second number\n");
    scanf("%d", &y);

    int m=multiply(x,y);
    printf("multiply is %d\n",m);

    return 0;
}
    int multiply(int x,int y){
    return x*y;
}