#include <stdio.h>
#include <stdlib.h>

int marks[7],grade[7];

void grades()
{
    for (int i=1;i<=7;i++)
    {
        if (marks[i]>=70 && marks[i]<=100)
        {
            //printf("Grade for unit%d: A\n",i);
            grade[i]='A';
        }
        else if (marks[i]>=60 && marks[i]<=69)
        {
            //printf("Grade for unit%d: B\n",i);
             grade[i]='B';
        }
        else if (marks[i]>=50 && marks[i]<=59)
        {
            //printf("Grade for unit%d: C\n",i);
             grade[i]='C';
        }
        else if (marks[i]>=40 && marks[i]<=49)
        {
            //printf("Grade for unit%d: D\n",i);
             grade[i]='D';
        }
        else if (marks[i]>=30 && marks[i]<=39)
        {
            //printf("Grade for unit%d: E\n",i);
             grade[i]='E';
        }
        else if (marks[i]>=0 && marks[i]<=29)
        {
            //printf("Grade for unit%d: F\n",i);
             grade[i]='F';
        }
        else
        {
            printf("Invalid input.\n");
        }
    }
}

void get_marks()
{
    for  (int i=1;i<=7;i++)
    {
        printf("Enter your marks for unit%d:",i);
        scanf("%d",&marks[i]);
    }
}

void main()
{
    get_marks();
    grades();
    FILE *fpointer;
    fpointer = fopen("gradesformarks.txt","w");
    for (int i = 1; i <= 7 ;i++){
        fprintf(fpointer,"Mark for unit%d:%d\nGrade for unit%d:%c\n", i,marks[i],i, grade[i]);
    }
    fclose(fpointer);
}
