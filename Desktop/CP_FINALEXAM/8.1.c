//Write a program to display the following pattern 
// one stars in first row, two stars in second row and so on in diamond shape.
#include<stdio.h>
void main()
{
    int n,i,k,j;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    //Upper half of diamond
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    //Lower half of diamond
    for(i=n-1;i>=1;i--)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
