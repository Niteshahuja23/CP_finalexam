//Write a program to check the given number is even/odd, perfect square and prime number
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    checkEvenOdd(n);
    checkPerfectSquare(n);
    checkPrime(n);
}
void checkEvenOdd(int n)
{
    if(n%2==0)
    {
        printf("The number %d is Even\n",n);
    }
    else
    {
        printf("The number %d is Odd\n",n);
    }
}
void checkPerfectSquare(int n)
{
    int i,flag;
    flag = 0;
    for(i = 1;i*i <= n;i++)
    {
        if(i*i == n)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("The number %d is a Perfect Square\n",n);
    }
    else
    {
        printf("The number %d is not a Perfect Square\n",n);
    }
}
void checkPrime(int n)
{
    int i,flag;
    flag = 1;
    if(n <= 1)
    {
        flag = 0;
    }
    for(i = 2;i <= n/2;i++)
    {
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        printf("The number %d is a Prime Number\n",n);
    }
    else
    {
        printf("The number %d is not a Prime Number\n",n);
    }
}