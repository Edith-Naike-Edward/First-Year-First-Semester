#include <stdio.h>

int main()
{
    float amountsaved;
    int period;
    float interestamount;
    int num1,num2;
    printf("Enter a number: ");
    switch(num1)
    {

    }
    printf("Enter the period in months: ");
    scanf("%d",&period);
    printf("Enter amount saved: ");
    scanf("%f",&amountsaved);
    if (period>60){
        interestamount=amountsaved*0.10;
        //printf("Interest amount: %f\n",&interestamount);
    }
    else if (period>36 && period<60){
        interestamount=amountsaved*0.09;
        //printf("Interest amount: %f\n",&interestamount);
    }
    else if (period>12 && period<36){
        interestamount=amountsaved*0.08;
        //printf("Interest amount: %f\n",interestamount);
    }
    else if (period>6 && period<12){
        interestamount=amountsaved*0.06;
        //printf("Interest amount: %f\n",&interestamount);
    }
    else if (period<6){
        interestamount=amountsaved*0.05;
        //printf("Interest amount: %f\n",&interestamount);
    }
    else{
        printf("Invalid input");
    }

    float openingbalance;
    char name[20];
    int idnumber;
    printf("Enter the name: ");
    //fgets(name,20,stdin);
    scanf("%s",name);
    printf("Enter the id number: ");
    scanf("%d",&idnumber);
    printf("Enter the opening balance: ");
    scanf("%f",&openingbalance);

    printf("Amount saved:%f\n",amountsaved);
    printf("Name:%s\n",name);
    printf("ID number:%d\n",idnumber);
    printf("Opening balance:%f\n",openingbalance);
    printf("Interest amount:%f\n",interestamount);
}
