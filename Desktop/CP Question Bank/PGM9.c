//Write a program to generate Fibonacci series.
#include <stdio.h>
int main()
{
    int n;
    void fibonacci(int n);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
void fibonacci(int n)
{
    int t1 = 0, t2 = 1, t3, i;
    printf("Fibonacci Series: \n");
    printf("%d\t %d\t ", t1, t2);
    for (i = 2; i < n; i++)
    {
        t3 = t1 + t2;
        printf("%d\t", t3);
        t1 = t2;
        t2 = t3;
    }
}