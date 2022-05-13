#include <stdio.h>

int number;

void get_numbers()
{
    printf("Enter a number:\n");
    scanf("%d",&number);
}

void isEven(int number)
{
    if (number%2==0)
    {
        printf("The number is even.");
    }
    else if (number%2!=0)
    {
        printf("The number is odd.");
    }
}

void isPos(int number)
{
    if (number>0)
    {
        printf("\nThe number is positive.");
    }
    else if (number<0)
    {
        printf("\nThe number is negative.");
    }
}

int NumDigit(int number)
{
    int counter=0; // variable declaration
    while(number!=0)
    {
        number=number/10;
        counter++;
    }
    return counter;
}

int main()
{
    int countdigits=0;
    get_numbers();
    NumDigit(number);
    isEven(number);
    isPos(number);
    countdigits=NumDigit(number);
    printf("\nNumber of digits is : %d", countdigits);
    return 0;
}
