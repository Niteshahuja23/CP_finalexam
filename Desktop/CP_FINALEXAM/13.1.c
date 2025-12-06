//Write a menu driven program to perform Arithmetic operation.
#include<stdio.h>
void main()
{
    int choice;
    int a,b,result;
    float ans;
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n"); 
    printf("4. Division\n");
    printf("5. Modulus(Remainder)\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice)
    {
        case 1: result = a + b;
                printf("The addition of %d and %d is: %d\n",a,b,result);
                break;
        case 2: result = a - b;
                printf("The subtraction of %d from %d is: %d\n",b,a,result);
                break;
        case 3: result = a * b;
                printf("The multiplication of %d and %d is: %d\n",a,b,result);
                break;
        case 4: if(b != 0)
                {
                    ans = a / (b*1.0);
                    printf("The division of %d by %d is: %.2f\n",a,b,ans);
                }
                else
                {
                    printf("Division by zero is not allowed.\n");
                }
                break;
        case 5: if(b != 0)
                {
                    result = a % b;
                    printf("The modulus of %d and %d is: %d\n",a,b,result);
                }
                else
                {
                    printf("Modulus by zero is not allowed.\n");
                }
                break;
        default: printf("Invalid choice. Please select a valid option from the menu.\n");
                 break;
    }
}