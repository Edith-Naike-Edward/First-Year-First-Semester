#include <stdio.h>

int main()
{
    int num;
    printf("Enter a prime number: \n");
    scanf("%d",&num);
    int factor;/*prime numbers have only two factors 1 and themselves*/

    int i;
    for(i=1;i<=num;i++){
        if(num%i == 0){
            factor++;
        }
    }

    if(factor==2){
        printf("The number is a prime number .");
    }
    else{
        printf("The number is  not a prime number .");
    }
}
