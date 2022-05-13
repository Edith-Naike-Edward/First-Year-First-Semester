#include<stdio.h>
void main()
{
//Declaration of variables
    int age;
    char fnames[20];
    float fees;


    /*Use the format specifier ^\n to allow scanf to
    read until the end of line character.

    Sometimes when using scanf() to get an integer or a float first
    before getting the string, it can skip the following scanf()
    you can use the getchar() method to help scanf() get the next
    character or use scanf() to get a single character.

    */
    printf("Enter your age\n");
    scanf("%d",&age);
    getchar();
    printf("Enter your name \n");
    scanf("%[^\n]",fnames);
    printf("Enter the amount of fees your have paid\n");
    scanf("%f",&fees);

    printf("Your details are \nNames: %s \nAge: %d \nFees: %.2f\n",fnames,age,fees);

}
