//Write a program to multiply two matrices.
#include <stdio.h>
void main()
{
    int m1,n1,m2,n2,a[10][10],b[10][10],c[10][10];
    void scanMatrix(int [][10],int,int);
    void printMatrix(int [][10],int,int);
    void multiplyMatrix(int [][10],int [][10],int [][10],int,int,int);
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d",&m1,&n1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d",&m2,&n2);
    if(n1==m2)
    {
        printf("Enter elements of first matrix one by one: \n");
        scanMatrix(a,m1,n1);
        printf("Enter elements of second matrix one by one: \n");
        scanMatrix(b,m2,n2);
        printf("First matrix: \n");
        printMatrix(a,m1,n1);
        printf("Second matrix: \n");
        printMatrix(b,m2,n2);
        printf("Multiplication of two matrices is: \n");
        multiplyMatrix(a,b,c,m1,m2,n2);
        printMatrix(c,m1,n2);
    }
    else
    {
        printf("Multiplication not possible\n");
    }

}
void scanMatrix(int a[][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void printMatrix(int a[][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void multiplyMatrix(int a[][10],int b[][10],int c[][10],int m1,int m2,int n2)
{
    int i,j,k;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            c[i][j]=0;
            for(k=0;k<m2;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
}
