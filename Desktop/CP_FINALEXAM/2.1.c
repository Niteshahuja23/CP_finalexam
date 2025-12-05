//Write a program to display the numbers from 1 to 100 that are divisible by 4 and 6
#include<stdio.h>
void main()
{
    int i;
    for(i = 1; i<=100; i++)
    {
        if(i%4 == 0 && i%6 == 0)
        {
            printf("%d\n",i);
        }
    }
}