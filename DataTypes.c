#include<stdio.h>
/*variables store data
Data types are the different kinds of data stored and manipulated by your programs
Three types of data types in C integers, floats and characters*/


main()
{
 /*Declaring a integer variable. Integers store whole numbers*/
 int age;
 /*Assigning value to a variable*/
 age=17;
 /*printing the value of an integer variable*/
 printf("This is an integer variable\n");
 printf("%d\n",age);
/*two variables of the same type can be declared in one line*/
 int height,width;
 /*Declaring a float variable. Floats store numbers with a fractional part*/
 printf("This is a float variable\n");
 float bread_price;
 /*assigning a value to a float variable*/
 bread_price=70.50;
 /*Printing a float variable*/
 printf("%f\n",bread_price);
 /*Prints the floating variable with two floating points"*/
 printf("This prints the price value in two decimal places\n");
 printf("%.2f\n",bread_price);
 /*determine the number of characters to be printed in  the float*/
 printf("%6f\n",bread_price);
 /*Declaring a character variable. Character data type stores a single character*/
 char name_initial='S';
 /*Printing a character variable*/
 printf("This is a character variable \n");
 printf("%c\n",name_initial);

 /*Escape characters*?
 /*\n creates a new line*/

 printf("Hello there \nI am happy now\n");

 /*\t creates a tab*/

 printf("Monday\t\tTuesday\t\tWednesday\t\tThursday\t\tFriday\t\t\n");
 /* A variable to store more than 1 character*/
 char name[10]="Selina";
 printf("%s",name);



}

