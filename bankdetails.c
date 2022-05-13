#include <stdio.h>
#include <stdlib.h>

char name[5][30];
int accnumber[5];
float accbalance[5];

int main()
{
    details();
    FILE *fpointer;
    fpointer = fopen("bankdetails.txt","w");
    for (int i = 1; i <= 2 ;i++){
        fprintf(fpointer,"Name for customer %d: %s\nBank Account Number:%d\nBank balance:%.2f\n",i,name[i],accnumber[i],accbalance[i]);
    }
    fclose(fpointer);
    FILE * read = fopen("bankdetails.txt", "r");

    char line[255];
    fgets(line, 255, read);
    while (!feof(read)){
        printf("%s\n", line);
        fgets(line, 255, read);
    }
    fclose(read);

}

int details()
{
    for (int i = 1; i <= 5 ;i++)
    {
        printf("Enter your name:\n");
        scanf("%s",&name[i]);
        printf("Enter your account number:\n");
        scanf("%d",&accnumber[i]);
        printf("Enter your account balance:\n");
        scanf("%f",&accbalance[i]);
    }
}

