//Write a program to display the class according to the marks obtained by student using if else ladder.
#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the marks obtained: ");
    scanf("%d",&marks);
    if(marks > 100 || marks < 0)
    {
        printf("Invalid marks\n");
    }
    else
    {
        if(marks >= 70)
        {
            printf("Distinction\n");
        }
        else
        {
            if(marks >= 60)
            {
                printf("First Class\n");
            }
            else
            {
                if(marks >= 50)
                {
                    printf("Second Class\n");
                }
                else
                {
                    if(marks >= 40)
                    {
                        printf("Pass Class\n");
                    }
                    else
                    {
                        printf("Fail\n");
                    }
                }
            }
                
        }
    }
}