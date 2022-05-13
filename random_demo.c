#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    //srand sets the seed for the random numbers
    //time is used to set the seed to the current time
    //without setting the seed using srand() rand() will generate the same number all the time
    srand(time(0));
    //Generating random numbers between 1 and 10
    int random=(rand()%10+1);
    //Generating random numbers between 10 and 20. The number before the % indicates the range of the random numbers
    //The number after the plus is the starting point of the range
    int random1=(rand()%10+10);
    printf("%d %d ",random, random1);
}
