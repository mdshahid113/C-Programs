#include <stdio.h>
#include <conio.h>
float divide(float a, float b);

int main()
{
    float a, b;
    printf("Enter the first num :");
    scanf("%f", &a);
    printf("Enter the second num :");
    scanf("%f", &b);
    float D = divide(a, b);
    printf("divide is %f", D);
    return 0;
}

float divide(float a, float b)
{
    return a / b;
}
