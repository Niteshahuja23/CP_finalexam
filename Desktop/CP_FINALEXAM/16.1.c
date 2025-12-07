// Write a program to reverse the array.
#include<stdio.h>
void main()
{
    void inputArray(int[],int);
    void printArray(int[],int);
    void reverseArray(int[],int);
    int n,arr[100];
    printf("Enter the no of integers to be entered: ");
    scanf("%d",&n);
    printf("Enter integers one by one: ");
    inputArray(arr,n);
    printf("The entered integers are: ");
    printArray(arr,n);
    printf("The reversed array is:    ");
    reverseArray(arr,n);
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
void reverseArray(int arr[],int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
