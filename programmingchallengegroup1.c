#include<stdio.h>

/*int add(int a, int b){
    int sum = a + b;
    return sum;
}*/

float first1000(int amountofsales){
    return amountofsales * 0.01;
}

float abv1000to5000(int amountofsales){
    return first1000(1000) + (amountofsales-1000) * 0.03;
}

float abv5000to10000(int amountofsales){
    return first1000(1000) + abv1000to5000(4000) + (amountofsales-5000)*0.05;
}

float abv10000(int amountofsales){
    return first1000(1000) + abv1000to5000(4000) + abv5000to10000(5000) + (amountofsales-10000)*0.10;
}

int main()
{
    char name[30];
    int payroll_number;
    int amountofsales;

    printf("Enter the sales person's name: \n");
    fgets(name,30,stdin);
    printf("Enter the payroll number: \n");
    scanf("%d",&payroll_number);
    printf("Enter the amount of sales: \n");
    scanf("%d",&amountofsales);

    double commissionamount;
    const int retaineramount=25000;

    if(amountofsales>=70 && amountofsales<=1000){
        commissionamount = first1000(amountofsales);
    }
    else if(amountofsales>1000 && amountofsales<=5000){
        commissionamount = abv1000to5000(amountofsales);
    }
    else if(amountofsales>5000 && amountofsales<=10000){
        commissionamount = abv5000to10000(amountofsales);
    }
    else if(amountofsales>10000){
        commissionamount = abv10000(amountofsales);
    }

    double total_salary = commissionamount + retaineramount;

    printf("%s",name);
    printf("Payroll number: %d \n",payroll_number);
    printf("Sales amount: %d \n",amountofsales);
    printf("Commission amount: %d \n",commissionamount);
    printf("Total salary: %d \n",total_salary);
}
