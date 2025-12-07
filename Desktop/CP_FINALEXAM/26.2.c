//Write a program to append the data in the text file.
#include<stdio.h>
#include<ctype.h>
int main()
{
   FILE *fp;
   char ch;
   fp = fopen("testing.txt","a");
   if(fp==NULL)
   {
        printf("File not created\n");
   }
   else
    {
        do{
            scanf("%c",&ch);
            fprintf(fp,"%c",ch);
        }while(ch!='\n');
    }
    fclose(fp);
}
