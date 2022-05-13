#include <stdio.h>
#include <math.h>

//float trianglearea(int s, a, b, c, area)
/*{
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
}*/

/*float circlearea(float radius){
    circlearea=3.14*radius*radius;
}*/

/*int rectanglearea(int length, int width)
{
    rectanglearea=length*width;
}*/

int main()
{
    float rectanglearea;
    float length;
    float width;
    float height,base;
    int number;
    float radius;
    float trianglearea, circlearea;
    printf("Enter a number to calculate area for triangle(1),circle(2),rectangle(3): ");
    scanf("%d",&number);
    switch(number)
    {
    case 1:
       // printf("Enter the values of a, b and c \n");
        //scanf("%d %d %d", &a, &b, &c);
        /* compute s */

       // s = (a + b + c) / 2;
        //trianglearea = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Enter the height: ");
        scanf("%f",&height);
        printf("Enter the base: ");
        scanf("%f",&base);
        trianglearea=(base*height)/2;
        printf("Area of a triangle = %.2f \n", trianglearea);
        break;
    case 2:
        printf("\nEnter the radius of Circle : ");
        scanf("%f", &radius);
        circlearea = 3.14 * radius * radius;
        printf("\nArea of Circle : %.2f", circlearea);
        break;
    case 3:
        printf("Enter the length: ");
        scanf("%f",&length);
        printf("Enter the width: ");
        scanf("%f",&width);
        rectanglearea=length*width;
        printf("The area of the rectangle : %.2f ",rectanglearea);
        break;
    default:
        printf("The number is invalid");

    }
}
