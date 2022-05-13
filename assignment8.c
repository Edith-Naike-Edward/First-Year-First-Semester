#include <stdio.h>
#include <stdlib.h>
void main()
{
    char* grade[7];
    int marks[7];
    char* units[7] = {"csc111","csc112","csc113","csc115","csc001","csc009","csc126"};
    int i;
    for (i=1;i<=7;i++)
    {
        printf("Enter your marks for unit %s: \n", units[i]);
        scanf("%d",&marks[i]);
        if (marks[i]>=70 && marks[i]<101)
        {
            grade[i]="A";
        }
        else if (marks[i]>=60 && marks[i]<70)
        {
            grade[i]="B";
        }
        else if (marks[i]>=50 && marks[i]<60)
        {
            grade[i]="C";
        }
        else if (marks[i]>=40 && marks[i]<50)
        {
            grade[i]="D";
        }
        else if (marks[i]>=30 && marks[i]<40)
        {
            grade[i]="E";
        }
        else if (marks[i]>=0 && marks[i]<30)
        {
            grade[i] = "F";
            //getchar();
        }
        else if (marks[i]<0 || marks[i]>100)
        {
            grade[i]="Invalid";
        }
    }
    printf("\nUNIT\t\tMARKS\t\tGRADE\n");
    for (int j=1;j<=7;j++)
    {

         printf("%s\t\t%d\t\t%s\n",units[j],marks[j],grade[j]);
    }
}
