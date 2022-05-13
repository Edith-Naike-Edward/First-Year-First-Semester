#include <stdio.h>

void main()
{
  int number = 0;
  int sum=0;
  while (number<=20)
  {
      printf("%d ",number);
      number++;
      //sum=sum+number;
      sum+=number;
      printf("Sum: %d \n",sum);
  }

}
