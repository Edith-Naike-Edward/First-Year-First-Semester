#include <stdio.h>
#include <stdlib.h>

typedef char string[50];
typedef struct
{
    string name;
    string invoicedate;
    int itemsordered;
    float prices[50];
    float totalcost[50];
    float discount;
    float payableamount;
} hotel;

hotel invoice;
int invoicedetails();

int main()
{
    invoicedetails();
    int count=0;
    char choice='y';
    printf("\nDo you wish to create more invoices?(y/n):");
    scanf("%c",&choice);
    getchar();
    choice=getchar();
    if (choice=='y'){
        invoicedetails();
    }else if (choice!='y'){
        exit(0);
    }
    FILE *fpointer;
    fpointer = fopen("hoteldetails.txt","w");
    if (count!=0){
        fprintf(fpointer,"Name:%s\nDate:%s\nList of items and prices:%d %f\nTotal Cost:%f\nDiscount Given & Amount payable:%f %f",invoice.name,invoice.invoicedate,invoice.itemsordered,invoice.prices,invoice.totalcost,invoice.discount,invoice.payableamount);
        printf("\nDo you wish to create more invoices?(y/n)");
        scanf("%c",&choice);
        getchar();
        choice=getchar();
        count++;
    }else if (count==0){
        fprintf(fpointer,"%s",invoice.name);
    }
    fclose(fpointer);
    return 0;
}

int invoicedetails()
{
    printf("Enter your name:\n");
    scanf("%[^\n]",invoice.name);
    printf("Enter your date of invoice:\n");
    scanf("%[^\n]",invoice.invoicedate);
    printf("Enter the list of items ordered:\n");
    scanf("%d[^\n]",&invoice.itemsordered);
    for (int i=1;i<=invoice.itemsordered;i++)
    {
        printf("Enter the prices for ordered item %d:\n",i);
        scanf("%f[^\n]",&invoice.prices[i]);
        invoice.totalcost[i]=invoice.prices[i]++;
    }
    printf("Total cost:%.3f",invoice.totalcost);
    /*while (invoice.totalcost>5000.0)
    {
        invoice.discount=0.05;
        invoice.payableamount=(invoice.totalcost)*1.05;
        printf("Discount is:%f\n",invoice.discount);
        printf("Amount Payable:%f\n",invoice.payableamount);
    }
    while (invoice.totalcost>5000.0)
    {
        invoice.discount=0.0;
        invoice.payableamount=invoice.totalcost*1;
        printf("Discount is:%.2f\n",invoice.discount);
        printf("Amount Payable:%.2f",invoice.payableamount);
    }*/
    return 0;
}
