//Write a program to demonstrate call by value and call by reference.
#include <stdio.h>
void main()
{
    int a,b;
    void call_by_value_swap(int, int);
    void call_by_reference_swap(int*, int*);
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The values of a and b in main function before calling call_by_value_swap are: %d and %d\n",a,b);
    call_by_value_swap(a,b);
    printf("The values of a and b in main function after calling call_by_value_swap are: %d and %d\n",a,b);
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The values of a and b in main function before calling call_by_reference_swap are: %d and %d\n",a,b);
    call_by_reference_swap(&a,&b);
    printf("The values of a and b in main function after calling call_by_reference_swap are: %d and %d\n",a,b);
}
void call_by_value_swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The values of a and b in call_by_value_swap function are: %d and %d\n",a,b);
}
void call_by_reference_swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("The values of a and b in call_by_reference_swap function are: %d and %d\n",*a,*b);
}