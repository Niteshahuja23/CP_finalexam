//Write a program to display the class according to the marks obtained by student using switch case.
#include<stdio.h>
void main()
{
    int marks;
    printf("Enter marks obtained: ");
    scanf("%d",&marks);
    if(marks==100)
    {
        printf("Distinction\n");
    }
    else
    {
        switch(marks/10)
        {
            case 9:
            case 8:
            case 7: printf("Distinction\n");
                    break;
            case 6: printf("First clase\n");
                    break;
            case 5: printf("Second class\n");
                    break;
            case 4: printf("Pass class\n");
                    break;
            case 3:
            case 2:
            case 1:
            case 0: printf("Fail\n");
                    break;
            default: printf("Invalid marks\n");
                     break;
        }
    }
}