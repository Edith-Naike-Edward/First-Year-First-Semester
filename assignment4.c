#include <stdio.h>

#define KSH_TO_USD 0.009 //
int main(void) {

    double ksh,
           usd;

    char   ans;  // Memory for answer of Y/N question

    // If answer is 'y' loop back through
    while(ans != 'n' && ans != 'N') {
        // User input for US Dollar amihbt
        printf("Please enter the amount of KES that you want to convert to USD> ");
        scanf("%lf", &ksh);
        // Currency conversion: 1 ksh to 0.009
        usd = ksh * KSH_TO_USD;
        // Output of converted euro amount
        printf("%.2f KES equals %.2f USD.\n", ksh, usd);
        printf("Do you want to convert another amount (y/n)?");
        fflush(stdin);
        scanf(" %c", &ans);
    }
    return (0);
}
