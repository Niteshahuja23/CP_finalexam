//Write a program to find the transpose of square matrix.
//I have taken transpose in the same maxtrix, you can create another matrix(at) to store transpose if u want. 
#include<stdio.h>
void main()
{
    int n,arr[10][10];
    void inputSquareMatrix(int [][10],int);
    void printSquareMatrix(int [][10],int);
    void transposeSquareMatrix(int [][10],int);
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Enter elements one by one: ");
    inputSquareMatrix(arr,n);
    printf("Entered elements of the matrix are: \n");
    printSquareMatrix(arr,n);
    printf("The transpose of the matrix is: \n");
    transposeSquareMatrix(arr,n);
    printSquareMatrix(arr,n);
}
void inputSquareMatrix(int arr[][10],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
void printSquareMatrix(int arr[][10],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
void transposeSquareMatrix(int arr[][10],int n)
{
    int i,j,temp;
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<n;j++)
        {
            if(j>i)
            {
                temp = arr[i][j];
                arr[i][j]= arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
}