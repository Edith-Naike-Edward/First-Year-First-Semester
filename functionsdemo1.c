#include<stdio.h>
//DIvisible by three
int a;
//Function declaration and implementation
//void means the function is not returning a value. The function Divisible checks if a number is divisible by 3

void divisble(int a)
{
    if ((a%3)==0)
    {
        printf("%d is Divisible by 3\n",a);
    }
    else
    {
        printf("%d is not divisible by 3 \n",a);
    }

}
//Functions that calculates the sum of two numbers
//It returns an integer


int sum (int a,int b)
{
    int sum=a +b;
    return (sum);
}
void main()
{
    int c,d;
    printf("Enter the number to check if it is divisible by 3:\n");
    scanf("%d",&a);
    //Function call
    divisble(a);
    printf("Enter the one number to add\n");
    scanf("%d",&c);
    printf("Enter the second number to add\n");
    scanf("%d",&d);
    printf("%d",sum(c,d));

}
