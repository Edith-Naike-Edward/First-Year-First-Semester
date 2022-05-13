#include <stdio.h>

float commissionpercentage(int amountofsales)
{
    if (amountofsales >0 && amountofsales<1001)
    {
        commissionpercentage=1;
        commissionamount=commissionpercentage*amountofsales;
        printf("Commission Percentage = %.2f%%",1);
    }
    if (amountofsales >1000 && amountofsales<5001)
    {
        commissionpercentage=3%;
        commissionamount=commissionpercentage*amountofsales;
        printf("Commission Percentage = %.2f%%",3);
    }
    if (amountofsales >5000 && amountofsales<10001)
    {
        commissionpercentage=5%;
        commissionamount=commissionpercentage*amountofsales;
        printf("Commission Percentage = %.2f%%",5);
    }
    if (amountofsales >10000)
    {
        commissionpercentage=10%;
        commissionamount=commissionpercentage*amountofsales;
        printf("Commission Percentage = %.2f%%",10);
    }
}
int main()
{
    int payrollnumber,amountofsales;
    char name[30];
    int retaineramount=25000;
    int commissionamount=0;
    float commissionpercentage;
    double totalsalary;
    printf("Enter your name: ");
    fgets(name,30,stdin);
    printf("Enter your student ID number: ");
    scanf("%s",studentidnumber);
    printf("Enter your payroll number: \n");
    scanf("%d ",payrollnumber);
    printf("%d",payrollnumber);
    printf("Enter your amount of sales: \n");
    scanf("%d ",amountofsales);
    printf("%d",amountofsales);
    totalsalary=commissionamount+retaineramount;
    printf("%f",totalsalary);
}
