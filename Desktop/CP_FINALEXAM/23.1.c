// Write a program to accept a string and find the number of vowels in it.
#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i,count = 0,n;
    n = strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            count++;
        }
    }
    printf("Number of vowels in the given string: %d\n",count);
}