//Write a program to find the factorial of a number.
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
        return n*factorial(n-1);
    }
    /*I have written the factorial function using recursions. We can also write the same using iterations.
    unsigned long int factorial(int n)
    {
        int i;
        unsigned long int fact = 1;
        for(i = 1; i <= n;i++)
        {
            fact = fact * i;}
        }
        return fact;
    }
        we have to write in main that if n = 0 then ans = 1;
    */
}