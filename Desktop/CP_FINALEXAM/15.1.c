//Write a program to accept ‘n’ integers from the user into an array and find the largest/smallest integer.
//Write a program to accept ‘n’ integers from the user into an array and find the largest/smallest integer
#include<stdio.h>
void main()
{
    void inputArray(int [], int);
    void printArray(int [], int);
    void largestOrSmallest(int [], int);
    int arr[100],n;
    printf("Enter no of integers to be entered: ");
    scanf("%d",&n);
    printf("Enter integers one by one: ");
    inputArray(arr,n);
    printf("The entered array is: \n");
    printArray(arr,n);
    largestOrSmallest(arr,n);
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
void largestOrSmallest(int arr[],int n)
{
    int i,largest,smallest;
    largest = arr[0];
    smallest = arr[0];
    for(i = 0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    printf("The largest integer is %d\n",largest);
    printf("The smallest integer is %d\n",smallest);
}
