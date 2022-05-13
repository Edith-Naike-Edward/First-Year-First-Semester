#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int marks[7];
int nounits;

void get_marks()
{
    int i=1;
    printf("Enter number of units:");
    scanf("%d",&nounits);
    for (i;i<=nounits;i++)
    {
        printf("Enter marks for unit %d: ",i);
        scanf("%d",&marks[i]);
    }
    return marks[i];
}

void grade_marks()
{
    for (int j=1;j<=nounits;j++)
    {
        if (marks[j]>=70 && marks[j]<=100)
            {
                printf("Grade for %d:A\n",j);
            }
        else if (marks[j]>=60 && marks[j]<=69)
            {
                printf("Grade for %d:B\n",j);
            }
        else if (marks[j]>=50 && marks[j]<=59)
            {
                printf("Grade for %d:C\n",j);
            }
        else if (marks[j]>=40 && marks[j]<=49)
            {
                printf("Grade for %d:D\n",j);
            }
        else if (marks[j]>=30 && marks[j]<=39)
            {
                printf("Grade for %d:E\n",j);
            }
        else if (marks[j]>=0 && marks[j]<=29)
            {
                printf("Grade for %d:F\n",j);
            }
        else
            {
                printf("Invalid input.\n");
            }
    }
}

void total_marks()
{
    int total=0;
    int mrks[7];
    for (int a=1;a<=nounits;a++)
    {
        total+=mrks[a];
    }
    get_marks();
    grade_marks();
    return total;
}

void standard_dev()
{
    float avg,square_root;
    float std_deviation;
    float x,xsquared;
    float variance;
    int sum=0;
    avg=sum/7.0;
    for (int i=1;i<=nounits;i++)
    {
        total_marks();
        x=marks[i]-avg;
        xsquared=pow((marks[i]-avg),2);
        variance = sum / (float)7;
        std_deviation = sqrt(variance);
        square_root=sqrt(x);
    }
    printf("The Square root is %f \n",square_root);
    printf("Average of all elements = %.2f\n", avg);
    printf("variance of all elements = %.2f\n", variance);
    printf("Standard deviation = %.2f\n", std_deviation);
}

void main()
{
    int number;
    printf("1-to get marks,2-calculate grades,3-to calculate total,4-standard deviation,5-Exit\n");
    printf("Enter a number to choose an action:");
    scanf("%d",&number);
    switch(number)
    {
    case 1:
            get_marks();
    break;
    case 2:
             get_marks();
             grade_marks();
    break;
    case 3:
            // get_marks();
             total_marks();
    break;
    case 4:
             get_marks();
             grade_marks();
             total_marks();
             standard_dev();
    break;
    case 5:
        break;
    default:
         printf("Invalid input.");
    }
}
