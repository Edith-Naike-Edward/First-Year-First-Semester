#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number1,number2;
char* levels[3]={"low level,mid-level,high level"};

void get_numbers()
{
    printf("Enter first number:");
    scanf("%d",&number1);
    printf("Enter second number:");
    scanf("%d",&number2);
}

void chooselevel(char* levels[3])
{
    printf("LEVELS:Low level(1-10),Mid-level(11-50),High Level(51-100)");
    printf("Enter a level %s:",levels[3]);
    scanf("%d",&levels[3]);
}

void operations(int sum,int sub,int div,int product)
{
    int opnumber;
    printf("Choose a number:1-sum,2-difference,3-divide,4-product:");
    scanf("%d",&opnumber);
    switch(opnumber)
    {
    case 1:
        sum=number1+number2;
        printf("The sum of the two numbers is:%d\n",sum);
        break;
    case 2:
        sub=number1-number2;
        printf("The subtraction of the two numbers:%d\n",sub);
        break;
    case 3:
        div=number1/number2;
        printf("The division of the two numbers:%d\n",div);
        break;
    case 4:
        product=number1*number2;
        printf("The product of the two numbers:%d\n",product);
        break;
    default:
        printf("The numbers are invalid");
    }
}

int guessingnumbers()
{
    srand(time(0));
    int random1=(rand());
    int random2=(rand());
    int guessingnumber1;
    int guessingnumber2;
    int guesscount=0;
    printf("Enter the first guessing number:");
    scanf("%d",&guessingnumber1);
    printf("Enter the second number:");
    scanf("%d",&guessingnumber2);
    while (random1=0)
        if (guessingnumber1!=random1)
        {
            printf("Your guess is false.");
            printf("%d \n",random1);
            printf("The correct random number is %d",random1);
        }
        else if (guessingnumber2!=random2)
        {
            printf("Your guess is false.");
            printf("%d \n",random1);
            printf("The correct random number is %d",random2);
        }
        else if (guessingnumber1==random1)
        {
            printf("Your guess is true.");
            guesscount++;
        }
        else if (guessingnumber2==random2)
        {
            printf("Your guess is true.");
            guesscount++;
        }
    return guesscount;
}

int main()
{
    int counter=0;
    int sum,sub,div,product;
//    chooselevel(char* levels[3]);
    get_numbers();
    operations(sum,sub,div,product);
    counter=guessingnumbers();
    return 0;
}
