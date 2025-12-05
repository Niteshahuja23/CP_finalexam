//Write a program to demonstrate Bitwise operators.
#include<stdio.h>
void main()
{
    int a = 5,b = 10,ans;
    // Bitwise AND operator
    ans = a & b;
    printf("a & b: %d\n",ans);
    // Bitwise OR operator
    ans = a|b;
    printf("a|b: %d\n",ans);
    // Bitwise XOR operator
    ans  = a^b;
    printf("a^b: %d\n",ans);
    // Bitwise NOT operator
    ans = ~a;
    printf("~a: %d\n",ans);
    // Left shift operator
    ans = a<<b;
    printf("a<<b: %d\n",ans);
    // Right shift operator
    ans = a>>b;
    printf("a>>b: %d\n",ans);
}