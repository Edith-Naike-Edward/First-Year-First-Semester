#include <stdio.h>

void main()
{
    int weekday;
    printf("Enter a week day in number: \n");
    scanf("%d",&weekday);
    switch(weekday)
    {
        case 1:
        printf("The day of the week is Sunday");
        break;
        case 2:
        printf("The day of the week is Monday");
        break;
        case 3:
        printf("The day of the week is Tuesday");
        break;
        case 4:
        printf("The day of the week is Wednesday");
        break;
        case 5:
        printf("The day of the week is Thursday");
        break;
        case 6:
        printf("The day of the week is Friday");
        break;
        case 7:
        printf("The day of the week is Saturday");
        break;
        default:
        printf("The day of the week is invalid");
    }
}
