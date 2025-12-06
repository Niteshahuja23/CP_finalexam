//Write a program to display the following pattern:
//One stars in first row, three stars in second row and so on in diamond shape
#include<stdio.h>
void main()
{
    int n,i,j,k,l;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    //Upper part of diamond
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n-i; j++)
        {
            printf("  ");
        }
        for(k = 1; k <= i; k++)
        {
            printf("* ");
        }
        for(l = 1; l <= i-1; l++)
        {
            printf("* ");
        }
        printf("\n");
    }
    //Lower part of diamond
    for(i = n-1; i >= 1; i--)
    {
        for(j = 1; j <= n-i; j++)
        {
            printf("  ");
        }
        for(k = 1; k <= i; k++)
        {
            printf("* ");
        }
        for(l = 1; l <= i-1; l++)
        {
            printf("* ");
        }
        printf("\n");
    }
}