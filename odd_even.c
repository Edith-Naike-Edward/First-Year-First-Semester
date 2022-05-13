#include <stdio.h>

void main()
{
    int mark;
    printf("Enter your mark: \n");
    scanf("%d",&mark);
    if (mark>=90 && mark<=99)
    {
        printf("The mark is A+");
    }
     else if (mark>=80 && mark<=89)
    {
        printf("The mark is an A");
    }
     else if (mark>=70 && mark<=79)
    {
        printf("The mark is B");
    }
     else if (mark>=60 && mark<=69)
    {
        printf("The mark is an C");
    }
    else if (mark>=50 && mark<=59)
    {
        printf("The mark is an D");
    }
    else if (mark>=40 && mark<=49)
    {
        printf("The mark is an E");
    }
    else if (mark>=30 && mark<=39)
    {
        printf("The mark is an F");
    }
    else{
        printf("The mark is invalid");
    }

}
