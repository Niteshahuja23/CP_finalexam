//Write a program to accept ‘n’ integers from the user into an array and display the sum and average of these integers
#include<stdio.h>
void main()
{
    int n,arr[100],sum;
    float average;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    printf("Enter %d integers one by one:\n",n);
    inputArray(arr,n);
    printf("The entered integers are:\n");
    printArray(arr,n);
    sum = addArray(arr,n);
    printf("The sum of the entered integers is: %d\n",sum);
    average = (sum * 1.0)/n;
    printf("The average of the entered integers is: %.2f\n",average);
}
void inputArray(int arr[],int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
}
void printArray(int arr[],int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int addArray(int arr[],int n)
{
    int i, sum = 0;
    for(i = 0;i < n;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}