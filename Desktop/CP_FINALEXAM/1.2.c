//Write a program to demonstrate logical operators
#include <stdio.h>
void main()
{
    int a = 5, b = 10,c = 15, ans;
    // Logical AND operator
    ans = (a>b && b==c);
    printf("a>b && b==c: %d\n",ans);
    ans = (a<b && b==c);
    printf("a<b && b==c: %d\n",ans);
    // Logical OR operator
    ans = (a>b || b==c);
    printf("a>b || b==c: %d\n",ans);
    ans = (a<b || b==c);
    printf("a<b || b==c: %d\n",ans);
    // Logical NOT operator
    ans = !(a==b);
    printf("!(a==b): %d\n",ans);
    ans = !(a!=b);
    printf("!(a!=b): %d\n",ans);
}