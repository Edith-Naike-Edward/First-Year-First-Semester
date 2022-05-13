#include <stdio.h>

void main()
{
    int math;
    int eng;
    int swa;

    printf("Kindly input your scores for the following:  \n");
    printf("Maths: \n");
    scanf("%d",&math);
    printf("English: \n");
    scanf("%d",&eng);
    printf("Swahili: \n");
    scanf("%d",&swa);

    int total1= math + eng + swa;
    printf("Your total is %d \n",total1);

    printf("Kindly input your scores for the following:  \n");
    printf("Maths: \n");
    scanf("%d",&math);
    printf("English: \n");
    scanf("%d",&eng);
    printf("Swahili: \n");
    scanf("%d",&swa);

    int total2= math + eng + swa;
    printf("Your total is %d \n",total2);

    return 0;
}
