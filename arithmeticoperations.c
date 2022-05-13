#include <stdio.h>
void main()
{
    int number1,number2,switch_variable;
    printf("Enter the first number: \n");
    scanf("%d",&number1);
    printf("Enter the second number: \n");
    scanf("%d",&number2);
    printf("Select the option to be done with the two numbers: \n");
    scanf("%d",&switch_variable);
    switch(switch_variable)
    {

        case 1:
            printf("The sum of the two numbers is: %d ",number1 + number2);
            break;
        case 2:
            printf("The subtraction of the two numbers is: %d ",number1 - number2);
            break;
        case 3:
            printf("The division of the two numbers is: %d ",number1 / number2);
            break;
        case 4:
            printf("The multiplication of the two numbers is: %d ",number1 * number2);
            break;
        default:
            printf("The number you have entered is not a digit");
    }
}
