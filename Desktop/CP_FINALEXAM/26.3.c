//Write a program to copy the text file.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    char source[100], dest[100];

    printf("Enter source file name:");
    fflush(stdin);
    gets(source);
    printf("Enter destination file name:");
    fflush(stdin);
    gets(dest);
    fp1 = fopen(source,"r");
    fp2 = fopen(dest,"w");
    if(fp1==NULL || fp2==NULL)
    {
        printf("File not opened\n");
    }
    else
    {
        while(fscanf(fp1,"%c",&ch)!=EOF)
        {
            fprintf(fp2,"%c",ch);
        }
        fclose(fp1);
        fclose(fp2);
    }
}

