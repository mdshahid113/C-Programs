#include<stdio.h>
#include<conio.h>
void printTable(int num);
int main(){
    int num,i;
    printf("Enter any num :");
    scanf("%d",&num);
    printTable(num);
    return 0;
}
void printTable(int num){
    for(int i=1; i<=10; i++)
        printf("%d\n",i*num);
    
}