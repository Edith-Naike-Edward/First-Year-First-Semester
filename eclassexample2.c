/*
	== equal to
	!=not equal to
	< less than
	> greator than
	<= less than or equal
	>= greator than or equal
	&& logical AND
	||logical or
	!logical not

	________________________________________
	logical operators are used with conditional statements
	like if else
	_______________________________________
	Example

	*/
	#include<stdio.h>
	void main()
	{
	    int number1,number2;
	    printf("Enter the first number\n");
	    scanf("%d",&number1);
	    printf("Enter the second number\n");
	    scanf("%d",&number2);

	    if (number1>0 || number2>0)
        {
            printf("Number one is greater than number 2\n");
        }
        else if(number2>number1)
        {
            printf("Number two is greater than number one\n");

        }
        else if(number1==number2)
        {

            printf("The two numbers are equal\n");
        }

	    else{
            printf("You are numbers are strange\n");
	    }

	}
