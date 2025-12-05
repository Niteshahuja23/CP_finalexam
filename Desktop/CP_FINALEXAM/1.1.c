//Write a program to accept three numbers from the user and display the largest number using ternary operator
#include <stdio.h>
void main()
{
    int a,b,c,greater;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    greater = a > b ? (a > c ? a:c):(b > c ? b:c);
    printf("The largest number is: %d",greater);
}