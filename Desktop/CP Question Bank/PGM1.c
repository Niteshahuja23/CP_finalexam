//Write a program to accept three numbers from  the use and display the largest number using ternary operator.
#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    largest = (a>b)?a:b;
    largest = (largest>c)?largest:c;
    printf("The largest number is: %d\n",largest);

    return 0;
}