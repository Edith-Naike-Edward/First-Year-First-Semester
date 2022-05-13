#include <stdio.h>
#include <stdlib.h>
// REG NUMBER:P15/143394/2021

void main()
{
    float amount;
    int idnumber;
    char name[20];
    int number;
    float saving1;
    float saving2;
    float deposit1;
    float deposit2;
    float deposit3;
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your id number:");
    scanf("%d",&idnumber);
    printf("Enter the amount of money you wish to invest:");
    scanf("%f",&amount);
    printf("[1]Saving account with 2 withdrawals:\n[2]Saving account with 4 withdrawals:\n[3]Fixed deposit(3 months):\n[4]Fixed deposit(6 months):\n[5]Fixed deposit (12 months):\n");
    printf("[6]Exit\n");
    printf("Enter a number to choose an option:");
    scanf("%d",&number);
    switch(number)
    {
    case 1:
        saving1= (amount*0.1*1)+ (amount*0.1*1);
        printf("[1]Interest:%.2f and Total amount earned:%.2f",saving1,amount+saving1);
        break;
    case 2:
        saving2=(amount*0.05*1)+(amount*0.05*1)+(amount*0.05*1)+(amount*0.05*1);
        printf("[1]Interest:%.2f and Total amount earned:%.2f",saving2,amount+saving2);
        break;
    case 3:
        deposit1=(amount*0.05*0.25);
        printf("Fixed deposit for 3 months:%.2f and Total amount earned:%.2f",deposit1,amount+deposit1);
        break;
    case 4:
        deposit2=(amount*0.08*0.5);
        printf("Fixed deposit for 6 months:%.2f and Total amount earned:%.2f",deposit2,amount+deposit2);
        break;
    case 5:
        deposit3=(amount*0.11*1);
        printf("Fixed deposit for 12 months:%.2f and Total amount earned:%.2f",deposit3,amount+deposit3);
        break;
    case 6:
        break;
    default:
        printf("Invalid number");
        break;
    }

}
