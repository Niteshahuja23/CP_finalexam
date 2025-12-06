//Write a program to find the LCM and GCD of two numbers.(very important)
#include<stdio.h>
void main()
{
    int n1,n2,lcm,gcd;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    if(n1 > n2)
    {
        lcm = n1;
        gcd = n2;
    }
    else
    {
        lcm = n2;
        gcd = n1;
    }
    while(lcm % n1 != 0 || lcm % n2 != 0)
    {
        lcm++;
    }
    while(n1 % gcd != 0 || n2 % gcd != 0)
    {
        gcd--;
    }
    //Alternatively, if we want to calculate GCD using LCM, we can use the formula:
    //gcd * lcm = n1 * n2
    //Therefore, gcd = (n1 * n2) / lcm;
    printf("LCM = %d\nGCD = %d",lcm,gcd);
}