//Write a program to perform addition using call by reference.
#include<stdio.h>
void main()
{
    int a=5,b=10,s;
    int sum(int *,int *);
    int*p1,*p2;
    p1 = &a;
    p2 = &b;
    s = sum(p1,p2);
    printf("%d",s);
}
int sum(int *p1,int *p2)
{
    int s;
    s = *p1 + *p2;
    return s;
}
