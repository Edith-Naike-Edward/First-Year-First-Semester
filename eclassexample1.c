#include<stdio.h>
void main()
{
    int mark;
    char grade;
    printf("Enter the marks\n");
    scanf("%d",&mark);
    if (mark>=0 && mark<40)
    {

        grade='F';
    }
    else if (mark>=40 && mark<50)
    {

        grade='D';
    }
    else if (mark>=50 && mark<60)
    {

        grade='C';
    }
    else if (mark>=60 && mark<70)
    {

        grade='B';
    }
    else if (mark>=70 && mark<=100)
    {

        grade='A';
    }

    else
    {
        printf("invalid mark\n");
    }


    printf("Mark: %d Grade: %c",mark,grade);

}
