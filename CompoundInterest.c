#include <stdio.h>
int main() {
    float principal, rate, time, compoundInterest;
    char choice;
    do {
        printf("Enter principal amount: ");
        scanf("%f", &principal);
        printf("Enter annual interest rate (in percentage): ");
        scanf("%f", &rate);
        printf("Enter time period in years: ");
        scanf("%f", &time);
        compoundInterest = principal;
        int i = 0;
        do {
            compoundInterest *= (1 + rate / 100);
            i++;
        } while (i < (int)time);
        compoundInterest -= principal;
        printf("Compound Interest = %.2f\n", compoundInterest);
        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    return 0;
}

