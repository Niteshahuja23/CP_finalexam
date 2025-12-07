//Write a program to accept ‘n’ integers from the user into an array and sort the numbers in ascending/descending order
#include<stdio.h>
void main()
{
    void inputArray(int [], int);
    void printArray(int [], int);
    void sortArray(int [], int);
    int arr[100],n;
    printf("Enter no of integers to be entered: ");
    scanf("%d",&n);
    printf("Enter integers one by one: ");
    inputArray(arr,n);
    printf("The entered array(before sorting) is: \n");
    printArray(arr,n);
    printf("The sorted array(in ascending order) is: \n");
    sortArray(arr,n);
    printArray(arr,n);
}
void inputArray(int arr[], int n)
{
    int i;
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void printArray(int arr[], int n)
{
    int i;
    for(i = 0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void sortArray(int arr[],int n)
{
    int i,j,temp;
    for(i = 0;i<n-1;i++)
    {
        for(j = 0;j<(n-1-i);j++)
        {
            if(arr[j+1]<arr[j]) //for ascending order
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}