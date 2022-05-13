#include <stdio.h>
void main()
{
char c ; /* we will store the characters we
read here.*/
char my_string[100]; /* we will store the
characters we read in this array*/
int counter ;/*This will help us to keep
track of the point in the array where we
are */
printf("Enter your string of characters and terminate by pressing enter: ");
counter=0;
do
{
c=getchar();
my_string[counter]=c;
counter=counter+1;
}while (c!='\n'); /* we continue reading
while the character
we read is not an end of line character*/
my_string[counter]='\0'; /* put a string
terminating character at the end of the
string (null character)*/
printf("%s",my_string);
}//end main
