//Write a program to find nCr.
#include<stdio.h>
void main()
{
    int n,r,nf,rf,nrf,ncr;
    unsigned long int factorial(int);
    printf("Enter n and r: ");
    scanf("%d %d",&n,&r);
    if(n==0 || r==0 || r>n)
    {
        printf("invalid values\n");
    }
    else
    {
        nf = factorial(n);
        rf = factorial(r);
        nrf = factorial(n-r);
        ncr = nf/(rf*nrf);
        printf("nCr of %d and %d is %lu\n",n,r,ncr);
    }
}
unsigned long int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}