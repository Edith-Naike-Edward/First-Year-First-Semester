#include<stdio.h>
char* grade(int marks)
{
    if(marks>=0&&marks<40)
    {
        return "E";
    }
    else if (marks>=40&&marks<50)
    {
        return "D";
    }
    else if(marks>=50&&marks<60)
    {
        return "C";
    }
    else if(marks>=60&&marks<70)
    {
        return "B";
    }
    else if(marks>=70&&marks<80)
    {
        return "A-";
    }
    else if (marks>=80&&marks<=100)
    {
        return "A";
    }
    else if(marks>100)
    {
        return "INVALID MARK";
    }
}
main()
{  int csc115,ccs001,ccs009,csc111,csc112,csc113,csc126,avg,total;
   char u1[10]="CSC115";
   char u2[10]="CCS001";
   char u3[10]="CCS009";
   char u4[10]="CSC111";
   char u5[10]="CSC112";
   char u6[10]="CSC113";
   char u7[10]="CSC126";
   char u8[10]="AVERAGE";
   char u9[10]="TOTAL";
   printf("Enter your CSC115 marks;\n");
   scanf("%d",&csc115);
   printf("\nEnter your CCS001 marks;\n");
   scanf("%d",&ccs001);
   printf("\nEnter your CCS009 marks;\n");
   scanf("%d",&ccs009);
   printf("\nEnter your CSC111 marks;\n");
   scanf("%d",&csc111);
   printf("\nEnter your CSC112 marks;\n");
   scanf("%d",&csc112);
   printf("\nEnter your CSC113 marks;\n");
   scanf("%d",&csc113);
   printf("\nEnter your CSC126 marks;\n");
   scanf("%d",&csc126);
   total=csc115+ccs001+ccs009+csc111+csc112+csc113+csc126;
   avg=(csc115+ccs001+ccs009+csc111+csc112+csc113+csc126)/7;

   printf("\nUNIT\t\tMARKS\t\tGRADE\n");
   printf("%s\t\t%d\t\t%s\n",u1,csc115,grade(csc115));
   printf("%s\t\t%d\t\t%s\n",u2,ccs001,grade(ccs001));
   printf("%s\t\t%d\t\t%s\n",u3,ccs009,grade(ccs009));
   printf("%s\t\t%d\t\t%s\n",u4,csc111,grade(csc111));
   printf("%s\t\t%d\t\t%s\n",u5,csc112,grade(csc112));
   printf("%s\t\t%d\t\t%s\n",u6,csc113,grade(csc113));
   printf("%s\t\t%d\t\t%s\n",u7,csc126,grade(csc126));
   printf("%s\t\t%d\t\t%s\n",u9,total);
   printf("%s\t\t%d\t\t%s\n",u8,avg,grade(avg));

 }
