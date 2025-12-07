//Write a program to demonstrate five string functions.
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[50],str2[50],str3[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    //strlen
    printf("1. strlen function:\n");
    printf("Length of first string: %d\n",strlen(str1));
    printf("Length of second string: %d\n",strlen(str2));
    //strcpy
    printf("2. strcpy function:\n");
    strcpy(str3,str1);
    printf("After copying, str3: %s\n",str3);
    //strcat
    printf("3. strcat function:\n");
    strcat(str3,str2);
    printf("After concatenation, str3: %s\n",str3);
    //strcmp
    printf("4. strcmp function:\n");
    int cmp = strcmp(str1,str2);
    if(cmp == 0)
    {
        printf("The two strings are equal.\n");
    }
    else if(cmp < 0)
    {
        printf("The first string is less than the second string.\n");
    }
    else
    {
        printf("The first string is greater than the second string.\n");
    }
    //strrev
    printf("5. strrev function:\n");
    strrev(str1);
    strrev(str2);
    printf("Reversed first string: %s\n",str1);
    printf("Reversed second string: %s\n",str2);
}