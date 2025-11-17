//Write a program to check whether the number is a part of Fibonacci series
#include <stdio.h>
int main()
{
    int n;
    void fibonacci(int n);

    printf("Enter a number: ");
    scanf("%d", &n);
    fibonacci(n);

    return 0;
}
void fibonacci(int n)
{
    int t1 = 0, t2 = 1, t3 = 0;
    if(n == t1 || n == t2)
    {
        printf("%d is a part of Fibonacci series", n);
        return;
    }
    while(t3<=n)
    {
    t3 = t1 + t2;
    t1 = t2;
    t2 = t3;

    if(n == t3)
    {
        printf("%d is a part of Fibonacci series", n);
        break;
    }
    else if(t3 > n)
    {
        printf("%d is not a part of Fibonacci series", n);
        break;
    }
}

}