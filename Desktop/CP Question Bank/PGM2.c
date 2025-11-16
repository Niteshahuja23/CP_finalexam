//Write a program to demonstrate logical operators.
#include<stdio.h>
int main()
{
    int a = 5, b = 10, c = 15, result;
    printf("Initial values: a = %d, b = %d, c = %d\n", a, b, c);

    printf("Logical AND operator (&&):\n");
    result = (a == b) && (b < c);
    printf("Result of (a == b) && (b < c): %d\n", result);
    result = (a == b) && (b > c);
    printf("Result of (a == b) && (b > c): %d\n", result);

    printf("Logical OR operator (||):\n");
    result = (a == b) || (b < c);
    printf("Result of (a == b) || (b < c): %d\n", result);
    result = (a == b) || (b > c);
    printf("Result of (a == b) || (b > c): %d\n", result);

    printf("Logical NOT operator (!):\n");
    result = !(a == b);
    printf("Result of !(a == b): %d\n", result);
}