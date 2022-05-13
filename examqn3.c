#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//REG NUMBER:P15/143394/2021

char c;
char ch;
char guess[20];
float answer;
int number;
int count=0;

void main()
{
    printf("[1]Odd number:\n[2]even number:\n[3]Square root:\n[4]Square of a number:\n[5]Exit");
    printf("Enter a number:");
    scanf("%d",&number);
    switch(number)
    {
    case 1:
        isodd();
        break;
    case 2:
        iseven();
    }
}

int iseven()
{
    printf("Is the number even(y/n):");
    c=getchar();
    if (c=='y')
    {
        if (number%2==0)
        {
            printf("The number is even");
            main();
        }
        else
        {
            printf("The number is not even");
            main();
        }
    }
    else if (c=='n')
    {
        if (number%2==0)
        {
            printf("The number is even");
            main();
        }
        else
        {
            printf("The number is not even");
            main();
        }
    }
    return 0;
}

int isodd()
{
    printf("Is the number odd(y/n):");
    ch=getchar();
    if (c=='y')
    {
        if (number%2!=0)
        {
            printf("The number is odd");
            main();
        }
        else
        {
            printf("The number is even");
            main();
        }
    }
    else if (c=='n')
    {
        if (number%2!=0)
        {
            printf("The number is odd");
            main();
        }
        else
        {
            printf("The number is even");
            main();
        }
    }
    return 0;
}

int squareroot()
{
    squarert=squareroot(number);
}
