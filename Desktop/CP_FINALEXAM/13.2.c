//Write a program to accept ‘n’ integers from the user into an array and display the array
#include<stdio.h>
void main()
{
    int n,arr[100];
    void inputArray(int arr[],int n);
    void printArray(int arr[],int n);
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    printf("Enter %d integers one by one:\n",n);
    inputArray(arr,n);
    printf("The entered integers are:\n");
    printArray(arr,n);
}
void inputArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}