#include <stdio.h>
#include <stdlib.h>

void main()
{
    char name[50];
    int customerno[40];
    int itemsno[40];
    char items[40];
    int prices[40];
    float totalprice[40];
    float discount1[40];
    float discount2[40];
    float discount3[40];
    float amount[40];
    float vat[40];
    for (int k=1;k<=2;k++)
    {
        printf("Enter your customer no:");
        scanf("%d",&customerno[k]);
        printf("Enter your name:");
        scanf("%s",&name[k]);
        printf("Enter the number of items:");
        scanf("%d",&itemsno[k]);
        for (int i=1;i<=itemsno[k];i++)
        {
            printf("Item[%d]:\n",i);
            scanf("%s",items);
            printf("Price for item[%d]:\n",i);
            scanf("%d",&prices);
            totalprice[k]=prices[i]++;
            printf("Total price:%.2f\n",totalprice[k]);
            if (totalprice[k]>=10000 && totalprice[k]<=20000)
            {
                discount1[k]=totalprice[k]-(totalprice[k]*0.05);
                vat[k]=discount1[k]*0.16;
                amount[k]=vat[k]+discount1[k];
                printf("The discount awarded is %.2f .",discount1[k]);
                printf("The vat charged is %.2f .",vat[k]);
                printf("The amount charged is %.2f .",amount[k]);
            }
            else if (totalprice[k]>20000 && totalprice[k]<50000)
            {
                discount2[k]=totalprice[k]-(totalprice[k]*0.07);
                vat[k]=discount2[k]*0.16;
                amount[k]=vat[k]+discount2[k];
                printf("The discount awarded is %.2f .",discount2[k]);
                printf("The vat charged is %.2f",vat[k]);
                printf("The amount charged is %.2f",amount[k]);
            }
            else if (totalprice[k]>50000)
            {
                discount3[k]=totalprice[k]-(totalprice[k]*0.10);
                vat[k]=discount3[k]*0.16;
                amount[k]=vat[k]+discount3[k];
                printf("The discount awarded is %.2f .",discount3[k]);
                printf("The vat charged is %.2f",vat[k]);
                printf("The amount charged is %.2f",amount[k]);
            }
        }
        FILE * fpointer;
        fpointer=fopen("invoices.txt","w");
        fprintf(fpointer,"Name:%s\n",name[k]);
        fprintf(fpointer,"Customer no:%s\n",customerno[k]);
        fprintf(fpointer,"Number of items:%s\n",itemsno);
        for (int j=1;j<=itemsno[k];j++)
        {
            fprintf(fpointer,"Item[%d]:%s\n",j,items[j]);
            fprintf(fpointer,"Price of item [%d]:%s\n",j,prices[j]);
        }
        fpointer=fopen("invoices.txt","r");
        fprintf(fpointer,"%s\n",name[k]);
        fprintf(fpointer,"%s\n",customerno[k]);
        fprintf(fpointer,"%s\n",itemsno[k]);
        for (int j=1;j<=itemsno[k];j++)
        {
            fprintf(fpointer,"Item[%d]:%s\n",j,items[j]);
            fprintf(fpointer,"Price of item [%d]:%s\n",j,prices[j]);
        }
        fclose(fpointer);
    }
}
