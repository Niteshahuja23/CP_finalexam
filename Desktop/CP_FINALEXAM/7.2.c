//WAP to find the numbers from 1 to 100 which are odd and divisible by 5 and 7.
#include <stdio.h>
void main()
{
    int i;
    printf("The numbers from 1 to 100 which are odd and divisible by 5 and 7 are:\n");
    for(i = 1;i <= 100;i+=2)
    {
        if(i%5 == 0 && i%7 == 0)
        {
            printf("%d\n",i);
        }
    }
}