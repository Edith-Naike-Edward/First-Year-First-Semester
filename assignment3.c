#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number1;
    double number2;
    printf("Enter first number: ");
    scanf("%lf", &number1);
    printf("Enter second number: ");
    scanf("%lf", &number2);

    printf("Answer: %f \n", number1 + number2);
    printf("Answer: %f \n", number1 * number2);
    printf("Answer: %f \n", number1/number2);
    printf("Answer: %f \n", number1 - number2);
    printf("Answer: %f \n", number2 - number1);

    return 0;

}
