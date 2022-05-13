#include <stdio.h>
int greater_int(int first, int second,int third)
{
    if (first>= second && first>=third)
{
    return first;
}
    else if (second>= first && second>=third)
{
    return second;
}
    else
{
    return third;
}
}//end function

int main()
{
    int greatest, a=10, b=20,c=15;
    greatest=greater_int(a,b,c);
    printf("The greatest integer is %d",greatest);
}
