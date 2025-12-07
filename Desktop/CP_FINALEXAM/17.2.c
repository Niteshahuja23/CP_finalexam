//Write a program to add two matrices.
#include <stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j;
    void inputMatrix(int [][10],int, int);
    void printMatrix(int [][10],int, int);
    void sumMatrix(int [][10],int [][10],int [][10],int, int);
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&i,&j);
    printf("Enter elements of first maxtrix one by one: ");
    inputMatrix(a,i,j);
    printf("Enter elements of second matrix one by one: ");
    inputMatrix(b,i,j);
    printf("First matrix: \n");
    printMatrix(a,i,j);
    printf("Second matrix: \n");
    printMatrix(b,i,j);
    printf("The sum of 2 matrices is: \n");
    sumMatrix(a,b,c,i,j);
    printMatrix(c,i,j);
}
void inputMatrix(int a[][10],int i, int j)
{
    int m,n;
    for(m = 0;m<i;m++)
    {
        for(n = 0;n<j;n++)
        {
            scanf("%d",&a[m][n]);
        }
    }
}
void printMatrix(int a[][10],int i, int j)
{
    int m,n;
    for(m = 0;m<i;m++)
    {
        for(n = 0;n<j;n++)
        {
            printf("%d\t",a[m][n]);
        }
        printf("\n");
    }
}
void sumMatrix(int a[][10],int b[][10],int c[][10],int i,int j)
{
    int m,n;
    for(m = 0;m<i;m++)
    {
        for(n = 0;n<j;n++)
        {
            c[m][n] = a[m][n]+b[m][n];
        }
    }
}

