/*Write a program to display the following pattern:
            1
          1 2 1
        1 2 3 2 1
*/
#include<stdio.h>
void main()
{
    int n,i,l,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        for(l = 1; l <= n-i; l++)
        {
            printf("    ");
        }
        for(j = 1; j <= i; j++)
        {
            printf("%4d",j);
        }
        for(k = i-1; k >= 1; k--)
        {
            printf("%4d",k);
        }
        printf("\n");
    }
}