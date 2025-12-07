//Write a program to calculate the sum and average of mxn matrix.
#include<stdio.h>
void main()
{
    int m,n,arr[10][10],sum;
    float average;
    void inputMatrix(int [][10],int,int);
    void printMatrix(int [][10],int,int);
    int sumOfMatrix(int [][10],int,int);
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&m,&n);
    printf("Enter elements one by one: ");
    inputMatrix(arr,m,n);
    printf("Entered elements of the matrix are: \n");
    printMatrix(arr,m,n);
    printf("The sum of all elements of the Matrix: ");
    sum = sumOfMatrix(arr,m,n);
    printf("%d\n",sum);
    printf("The average of all elements of the Matrix: ");
    average=sum/(m*n*1.0);
    printf("%.2f",average);
}
void inputMatrix(int arr[][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
void printMatrix(int arr[][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
int sumOfMatrix(int arr[][10],int m,int n)
{
    int i,j,sum = 0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum = sum + arr[i][j];
        }
    }
    return sum;
}