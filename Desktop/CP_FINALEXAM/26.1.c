//Write a program to accept a set of characters from user until the user presses the full stop and store in a text file. Read from the file and display the contents of the file.
#include <stdio.h>
void main()
{
    FILE *fp,*fp1;
    char ch;
    fp = fopen("Nitesh.txt","w");
    if(fp == NULL)
    {
        printf("File not created");
    }
    else
    {
        printf("Enter characters (press '.' to stop):\n");
        do
        {
            scanf("%c",&ch);
            fprintf(fp,"%c",ch);
        }while(ch != '.');
    }
    fclose(fp);

    fp1 = fopen("Nitesh.txt","r");
    if(fp1 == NULL)
    {
        printf("File not found");
    }
    else
    {
        while((fscanf(fp1,"%c",&ch)) != EOF)
        {
            printf("%c",ch);
        }

    }
}
