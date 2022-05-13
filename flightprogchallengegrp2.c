#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char flightno[50];
char name[50];
char passportno[50];
char departure[50];
char arrival[50];
int seatno;
float totalcost[50];
float discount;
float discountedprice;

int r=0;
int resvdetails();

int main()
{
    resvdetails();
    FILE *fpointer;
    fpointer = fopen("flightsdetails.txt","w");
    fprintf(fpointer,"Flight no:%s",flightno);
    fprintf(fpointer,"Name:%s",name);
    fprintf(fpointer,"Passport no:%s",passportno);
    fprintf(fpointer,"Departure:%s",departure);
    fprintf(fpointer,"Arrival:%s",arrival);
    fprintf(fpointer,"Number of Seats:%d",seatno);
    fprintf(fpointer,"Total cost:%.3f",totalcost);
    fprintf(fpointer,"For discount %.3f the discounted price is:%.3f",discount,discountedprice);
    fclose(fpointer);
    char choice='y';
    printf("Do you wish to create more reservations (y/n):\n");
    getchar();
    choice=getchar();
    while (choice=='y')
    {
        resvdetails();
        printf("Do you wish to create more reservations (y/n):\n");
        getchar();
        choice=getchar();
    }
    while (choice!='y')
    {
        exit(0);
    }
    return 0;
}

int resvdetails()
{
    printf("Enter your flight no:");
    scanf("%s",flightno);
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your passport no:");
    scanf("%s",passportno);
    printf("Where is your departure:");
    scanf("%s",departure);
    printf("Where is your arrival:");
    scanf("%s",arrival);
    printf("Enter the total cost:");
    scanf("%f",&totalcost);
    printf("Enter the number of seats:");
    scanf("%d",&seatno);
    r=seatno++;
    if (seatno>1)
    {
        discount=0.05;
//        discountedprice=totalcost * discount;
        printf("For discount %.3f the discounted price is:%.3f\n",discount,discountedprice);
    }else{
        printf("No discount");
    }
    return 0;
}
