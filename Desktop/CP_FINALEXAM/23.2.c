//Write a program to reverse the string.
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    strrev(str);
    printf("Reversed string: %s\n", str);
}
/**without using string.h(very important-read once)
#include <stdio.h>
void main()
{
    char str[100], rev[100];
    printf("Enter a string: ");
    gets(str);
    int i, j = 0;
    while(str[j] != '\0')
    {
        j++;
    }
    for(i = 0; i < j; i++)
    {
        rev[i] = str[j - i - 1];
    }
    rev[j] = '\0';
    printf("Reversed string: %s\n", rev);
}
**/