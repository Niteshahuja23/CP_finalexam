//Write a program to find the sum of natural numbers starting from 5 till the product of consecutive numbers is less than 400.
#include<stdio.h>
int main()
{
    int i, sum = 0, product = 1;
    for(i = 5; ;i++)
    {
        product = product*i;
        if(product < 400)
        {
            sum = sum + i;
        }
        else
        {
            break;
        }
    }
    printf("Sum of natural numbers starting from 5 till the product of consecutive numbers is less than 400: %d\n", sum);
    return 0;
}