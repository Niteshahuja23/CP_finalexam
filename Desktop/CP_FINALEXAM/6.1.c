//Write a program to reverse a number.
//This code does not works for numbers having trailing zeros. eg. 1340 : reverse is 431
#include<stdio.h>
void main()
{
    int n,reverse,digit;
    printf("Enter a number: ");
    scanf("%d",&n);
    reverse = 0;
    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    printf("The reverse of the given number is: %d",reverse);
}