//Write a program to add numbers divisible by 7 between 1 to 100.
#include<stdio.h>
void main()
{
    int i,sum = 0;
    for(i = 1; i <= 100; i++)
    {
        if(i%7 == 0)
        {
            sum = sum+i;
        }
    }
    printf("Sum of numbers divisible by 7 between 1 to 100 is: %d",sum);
}