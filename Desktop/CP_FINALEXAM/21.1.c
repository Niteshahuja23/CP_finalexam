/*Write a program to store and display the name, roll number and total PCM marks for ‘n’
students. Generate a merit list with respect to the total marks scored. Display the output in
tabular form in order of maximum total marks to minimum total marks.*/
struct student{
    char name[40];
    int roll_number;
    int pcm_marks;
};
#include <stdio.h>
void main()
{
    struct student s[100];
    int n,i,j;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        printf("Enter the name,roll number and total PCM marks of the student %d: ",i+1);
        scanf("%s %d %d",&s[i].name,&s[i].roll_number,&s[i].pcm_marks);
    }
    printf("Merit List:\n");
    printf("Name                                    Roll Number\tPCM Marks\n");
    printf("-----------------------------------------------------------------\n");
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n-1;j++)
        {
            if(s[j].pcm_marks < s[j+1].pcm_marks)
            {
                struct student temp;
                temp = s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for(i = 0;i < n;i++)
    {
        printf("%-40s%11d\t%9d\n",s[i].name,s[i].roll_number,s[i].pcm_marks);
    }

}