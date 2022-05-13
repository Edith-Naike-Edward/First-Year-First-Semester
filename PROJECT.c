#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32

// code to generate passwords
typedef char string[50];
typedef struct
{
    string name;//card holder's name
    string email;//card holder's email
    string password;//email account passcode
    string bankname;// name of the bank
    string bankacc;//bank account number
    string pin;//bank card holder's pin
    float balance;
    float withdraw;
    float deposit;
    float apy;//annual percentage yield
    float TI;
    float savings;
    float investment;
    float time;
    float rate;
    float CI;
} portal;

portal bank[5];

int main()
{
    char s;// stores yes or no
    char ch;//stores password characters
    char p;//stores pin
    int factor=0;//counter for password
    int k=0;//counter for pin
    int number;
    //this is a financial portal which allows you to enter details of your choice.
    printf("\n\t\t\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE FINANCIAL PORTAL \xB2\xB2\xB2\xB2\xB2");
    for (int i=1;i<=5;i++)
    {
        printf("\nEnter your email:");
        scanf("%s",&bank[i].email);
        printf("\nEmail:%s",bank[i].email);
        printf("\nEnter your email account password:");
        while(1)
        {
            ch=getch();
            if(ch==ENTER)
            {
                bank[i].password[factor]='\0';
                break;
            }
            else if(ch==BKSP)
            {
                if(i>0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            else if(ch==TAB||ch==SPACE)
            {
                continue;
            }
            else
            {
                bank[i].password[factor]=ch;
                factor++;
                printf("*");
            }
        }
        printf("\nShow password (y/n):");
        s=getch();
        bank[i].password[factor]=s;
        if (s=='y')
        {
            bank[i].password[factor]='\0';
            printf("\nYour password is: %s",bank[i].password);
        }
       //printf("\nLength:%d",factor);
        printf("\nEnter your name:");
        scanf("%s",&bank[i].name);
        printf("What is the name of the bank?");
        scanf("%s",&bank[i].bankname);
        printf("Enter your bank account number:");
        scanf("%s",&bank[i].bankacc);
        printf("Enter your personal PIN:");
        while(1)
        {
            p=getch();
            if(p==ENTER)
            {
                bank[i].pin[k]='\0';
                break;
            }
            else if(p==BKSP)
            {
                if(i>0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            else if(p==TAB||p==SPACE)//if a user enters space or tab the getch() continues reading
            {
                continue;
            }
            else
            {
                bank[i].pin[k]=p;
                k++;
                printf("*");
            }
        }
        printf("\n%s",bank[i].bankname);//bank name
        printf("\n\n \xB2\xB2\xB2");//Smart Chip
        printf("\n %s",bank[i].bankacc);
        printf("\n %s",bank[i].name);
        printf("\nEnter your balance:");
        scanf("%f",&bank[i].balance);
        //display of the front of a bank card
        printf("\n\t\t\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2");
        printf("\n[1]Savings\n[2]Investment\n[3]Check your balance\n[4]Withdraw cash\n[5]Deposit\nChoose a number:");
        scanf("%d",&number);
        switch(number)
        {
        case 1:
            printf("\nHow much do you want to save?");
            scanf("%f",&bank[i].savings);
            printf("\nFor how long do you want to save?");
            scanf("%f",&bank[i].time);
            printf("\nKindly, enter your desired apy:");
            scanf("%f",&bank[i].apy);
            bank[i].TI=bank[i].savings*bank[i].time*bank[i].apy;
            printf("\nTotal Interest = %.2f", bank[i].TI);
            printf("\nAmount Remaining after investing:%.3f",bank[i].balance-bank[i].savings);
            break;
        case 2:
            printf("\nHow much do you want to invest?");
            //compound interest
            scanf("%f",&bank[i].investment);
            printf("\nFor how long do you want to invest?");
            scanf("%f",&bank[i].time);
            printf("\nKindly, enter your desired rate:");
            scanf("%f",&bank[i].rate);
            bank[i].CI = bank[i].investment * (pow((1 + bank[i].rate / 100),bank[i].time));
            printf("\nAmount Remaining after investing:%.2f",bank[i].balance-bank[i].investment);
            // It will return the final Output
            printf("\nCompound Interest = %.2f\n", bank[i].CI);
            break;
        case 3:
            printf("Balance is:%.2f",bank[i].balance-bank[i].savings-bank[i].investment-bank[i].withdraw+bank[i].deposit);
            break;
        case 4:
            printf("How much do you want to withdraw:");
            scanf("%f",&bank[i].withdraw);
            if (bank[i].withdraw>bank[i].balance)
            {
                printf("Your balance is not sufficient.");
            }
            else
            {
                printf("New Balance:%f",bank[i].balance-bank[i].withdraw);
            }
            break;
        case 5:
            printf("How much do you want to deposit:");
            scanf("%f",&bank[i].deposit);
            printf("New Balance:%.2f",bank[i].balance+bank[i].deposit);
            break;
        default:
            printf("Invalid number!");
            break;
        return 0;
        }
    }
}

int filefunction(portal bank)
{
    FILE *fpointer;
        fpointer = fopen("bankapplication.txt","w");
        for (int i=0;i<=5;i++)
        {
        fprintf(fpointer,"%s\n%s\n%s\n",bank[i].name,bank[i].email,bank[i].bankname);
        fprintf(fpointer,"%s\n%.2f\n%.2f\n%.2f",bank[i].bankacc,bank.balance[i],bank[i].savings,bank[i].investment);
        fprintf(fpointer,"%.2f\n%.2f\n%.2f\n%.2f\n",bank[i].TI,bank[i].CI,bank[i].withdraw,bank[i].deposit);
        fclose(fpointer);
        FILE * read = fopen("bankapplication.txt", "r");
        char line[255];
        fgets(line, 255, read);
        while (!feof(read)){
            printf("%s\n", line);
            fgets(line, 255, read);
        }
        fclose(read);
        }
}
