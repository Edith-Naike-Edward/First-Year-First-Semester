#include <stdio.h>
#include <stdlib.h>

char* grade(int marks)
{
    if(marks >= 90 && marks <=100)
    {
        return "A+";
    }
    else if (marks >= 80 && marks < 89)
    {
        return "A";
    }
    else if (marks >= 70 && marks <79)
    {
        return "B";
    }
    else if (marks >= 60 && marks < 69)
    {
        return "C";
    }
    else if (marks >= 50 && marks <59)
    {
        return "D";
    }
    else if (marks >= 40 && marks < 49)
    {
        return "E";
    }
    else if (marks < 0 || marks > 100)
    {
        return "Invalid input" ;
    }
    else
    {
        return "F";
    }
}
void main()
{
    int csc111;
    int csc112;
    int csc113;
    int csc115;
    int csc126;
    int csc001;
    int csc009;
    char studentidnumber[30];
    char studentname[30];


    char code1[10]="CSC115";
    char code2[10]="CCS001";
    char code3[10]="CCS009";
    char code4[10]="CSC111";
    char code5[10]="CSC112";
    char code6[10]="CSC113";
    char code7[10]="CSC126";

    printf("Enter your name: ");
    fgets(studentname,30,stdin);
    printf("Enter your student ID number: ");
    scanf("%s",studentidnumber);
    printf("Enter your marks for CSC111: \n");
    scanf("%d", &csc111);
    printf("Enter your marks for CSC112: \n");
    scanf("%d", &csc112);
    printf("Enter your marks for CSC113: \n");
    scanf("%d", &csc113);
    printf("Enter your marks for CSC115: \n");
    scanf("%d", &csc115);
    printf("Enter your marks for CSC126: \n");
    scanf("%d", &csc126);
    printf("Enter your marks for CSC001: \n");
    scanf("%d", &csc001);
    printf("Enter your marks for CSC009: \n");
    scanf("%d", &csc009);

    printf("%s",studentname);
    printf("%s",studentidnumber);
    printf("\nUNIT\t\tMARKS\t\tGRADE\n");
    printf("%s\t\t%d\t\t%s\n",code1,csc111,grade(csc111));
    printf("%s\t\t%d\t\t%s\n",code2,csc112,grade(csc112));
    printf("%s\t\t%d\t\t%s\n",code3,csc113,grade(csc113));
    printf("%s\t\t%d\t\t%s\n",code4,csc115,grade(csc115));
    printf("%s\t\t%d\t\t%s\n",code5,csc126,grade(csc126));
    printf("%s\t\t%d\t\t%s\n",code6,csc001,grade(csc001));
    printf("%s\t\t%d\t\t%s\n",code7,csc009,grade(csc009));
}
