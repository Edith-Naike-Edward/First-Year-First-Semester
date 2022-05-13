#include<stdio.h>
//defining functions
float a,b;
void get_numbers()
{
    printf("Enter two numbers\n");
    scanf("%f",&a);
    scanf("%f",&b);
}

float division(float a,float b)
{
    float g;
    g=a/b;
    return g;
}
void main()
{
    float f;
    get_numbers();
    f=division(a,b);
    printf("%f ",f);

}
