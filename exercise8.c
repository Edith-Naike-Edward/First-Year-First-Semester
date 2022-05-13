#include<stdio.h>
int factorial(int n)
{
    if (n<=1)
{
    return 1;
}else
{
   return (n * factorial(n-1));
}
}
int factorial(int n); /* function prototype */
main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    //printf("\n n!=%d\n”,factorial(n));
    printf("\n n!=%d\n",factorial(n));
} //end main

