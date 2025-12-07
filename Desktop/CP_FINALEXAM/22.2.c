//Write a program that checks whether the entered string is a palindrome or not, without using string header file.
#include <stdio.h>
void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i,j = 0;
    while(str[j]!='\0')
    {
        j++;
    }
    printf("Length of the string: %d\n",j);
    int flag = 1;
    for(i=0;i<j/2;i++)
    {
        if(str[i] != str[j-i-1])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        printf("The string %s is a palindrome.\n",str);
    }
    else
    {
        printf("The string %s is not a palindrome.\n",str);
    }
}