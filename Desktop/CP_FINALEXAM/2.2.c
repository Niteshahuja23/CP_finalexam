//Write a program to display the prime numbers in between 75 to 150.
#include<stdio.h>
void main()
{
    int i,ans;
    int isPrime(int);
    for(i = 75; i <=150; i++)
    {
        ans = isPrime(i);
        if(ans == 1)
        {
            printf("%d\n",i);
        }
    }
}
int isPrime(int n)
{
    int i,flag;
    flag  = 1;
    for(i = 2;i <= n/2; i++)
    {
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}