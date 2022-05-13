#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float avg;
int numberArray[30];
int num;
int k;

void get_numbers()
{
    printf("Enter the amount of numbers in an array:");
    scanf("%d",&num);
    for (k=1;k<=num;k++)
    {
        printf("numberArray[%d]\n", k);
        scanf("%d",&numberArray[k]);
    }
    return numberArray[k];
}

void descending()
{
    for (int i = 1; i <= num; i++)
        {
            for (int j = i + 1; j <= num; j++)
            {
                if (numberArray[i] < numberArray[j])
                {
                    int a;
                    a = numberArray[i];
                    numberArray[i] = numberArray[j];
                    numberArray[j] = a;
                }
            }
        }

    for (int index= 1; index <= num; index++)
    {
        printf("%d ", numberArray[index]);
    }
}

void minNum()
{
    int smallest;
    for (int i = 1; i <= num; i++)
    {
        for (int j = i + 1; j <= num; j++)
        {
            if (numberArray[i] < numberArray[j])
            {
                smallest= numberArray[i];
            }
            else
            {
                smallest=numberArray[j];
            }
        }
    }
    printf("%d ", smallest);
}

void maxNum()
{
    int biggest;
    for (int i = 1; i <= num; i++)
    {
        for (int j = i + 1; j <= num; j++)
        {
            if (numberArray[i] > numberArray[j])
            {
                biggest= numberArray[i];
            }
            else
            {
                biggest=numberArray[j];
            }
        }
    }
    printf("%d ", biggest);
}

void average()
{
    int sum=0;
    for (int a=1;a<=num;a++)
    {
        sum=sum+numberArray[a];
    }
    avg=sum/(float)num;
    printf("Average of all elements = %.2f\n", avg);
}

void standard_dev()
{
    float std_deviation;
    float std;
    int total=0;
    float variance;
    average();
    for (int s=1;s<=num;s++)
    {
         total=(pow((numberArray[s]-avg),2))+total;
         variance=total/(float)num;
         std_deviation = sqrt(variance);
    }
    printf("variance of all elements = %.2f\n", variance);
    printf("Standard deviation = %.2f\n", std_deviation);
}

void main()
{
    int number;
    get_numbers();
    do{
    printf("1-Output the array in descending order\n2-Find the minimum number\n3-Find the maximum number\n4-Calculate the average of the array numbers\n5-Calculates the standard deviation");
    printf("\nEnter a number to choose an action:");
    scanf("%d",&number);
    switch(number)
    {
    case 1:
        descending();
        break;
    case 2:
        minNum();
        break;
    case 3:
        maxNum();
        break;
    case 4:
        average();
        break;
    case 5:
        standard_dev();
        break;
    default:
        printf("Invalid choice.Choose another number.\n");
    }
    }while(number>5 || number<1);
}
