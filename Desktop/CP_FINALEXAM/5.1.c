//Write a program to check whether the input 3 digit number is Armstrong number.
#include <stdio.h>
void main()
{
    int n,result;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    result = isArmstrong(n);
    if(result == n)
    {
        printf("The number %d is an Armstrong number.",n);
    }
    else
    {
        printf("The number %d is not an Armstrong number.",n);
    }
}
int isArmstrong(int n)
{
    int digit,temp,sum = 0;
    temp = n;
    while(n != 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }
    return sum;
}