//Write a program to generate Fibonacci series.
#include<stdio.h>
void main()
{
    int n, t1 = 0, t2 = 1, t3,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: \n0 \n1 \n");
    for(i = 3; i<= n; i++)
    {
        t3 = t1 + t2;
        printf("%d \n",t3);
        t1 = t2;
        t2 = t3;
    }
}