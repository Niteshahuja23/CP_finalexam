//Write a program to accept ‘n’ integers from the user into an array and display the count of even and odd integers.
#include<stdio.h>
void main()
{
    int n,arr[100];
    void inputArray(int [], int);
    void printArray(int [], int);
    void evenOrOdd(int [], int);
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    printf("Enter elements one by one: ");
    inputArray(arr,n);
    printf("The entered integers are: ");
    printArray(arr,n);
    evenOrOdd(arr,n);
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
void evenOrOdd(int arr[],int n)
{
    int evencount = 0,oddcount = 0,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("Total even numbers are %d\n",evencount);
    printf("Total odd numbers are %d",oddcount);
}
