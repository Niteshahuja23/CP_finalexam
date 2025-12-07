//Write a Program to find factorial using recursive function.
#include <stdio.h>
void main()
{
    int n;
    unsigned long int ans;
    unsigned long int factorial(int);
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n < 0)
    {
        printf("Factorial of negative numbers is not defined.\n");
    }
    else
    {
        ans = factorial(n);
        printf("Factorial of %d is %lu\n",n,ans);
    }
}
unsigned long int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}