#include <stdio.h>

void main()
{
    int currentmonth=10;
    int birthdaymonth;
    int monthdifference;
    printf("Enter your birthday month in numbers: ");
    scanf("%d",&birthdaymonth);
    /*if ((monthdifference==(currentmonth-birthdaymonth))>0)
    {
        monthdifference==currentmonth-birthdaymonth;
        printf("Your birthday has passed by %d months",monthdifference);
    }
    else if ((monthdifference==(currentmonth-birthdaymonth))<0)
    {
        monthdifference=birthdaymonth-currentmonth;
        printf("Your birthday month is approaching in %d months",monthdifference);
    }
    else if ((monthdifference==(currentmonth-birthdaymonth))==0)
    {
        monthdifference==currentmonth-birthdaymonth;
        printf("Your birthday month is this month");
    }
    else
    {
        printf("Invalid month");

    }*/
    if(birthdaymonth>=1 && birthdaymonth<currentmonth){
        monthdifference = currentmonth - birthdaymonth;
        printf("Your birthday was %d months ago .", monthdifference);
    }
    else if(birthdaymonth>currentmonth && birthdaymonth<=12){
        monthdifference = birthdaymonth - currentmonth;
        printf("Your birthday is in %d months .", monthdifference);
    }
    else if(birthdaymonth == currentmonth){
        printf("Your birthday is in this month !!!");
    }
    else{
        printf("Invalid month");
    }
}
