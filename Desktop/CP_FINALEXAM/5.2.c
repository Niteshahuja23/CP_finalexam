//Write a program to generate 3 digit Armstrong numbers.
#include <stdio.h>
void main()
{
    int i,result;
    printf("Three digit armstrong numbers are:\n");
    for(i = 100; i <= 999; i++)
    {
        result = isArmstrong(i);
        if(result == i)
        {
            printf("%d\n",i);
        }
    }

}
int isArmstrong(int n)
{
    int digit,temp,sum = 0;
    temp = n;
    while(n != 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }
    return sum;
}