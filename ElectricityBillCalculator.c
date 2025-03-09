#include <stdio.h>
int main() {
    int customerID, units;
    char name[50];
    float charge, total_bill, surcharge = 0;
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);
    if (units <= 199) {
        charge = units * 1.20;
    } else if (units >= 200 && units < 400) {
        charge = units * 1.50;
    } else if (units >= 400 && units < 600) {
        charge = units * 1.80;
    } else {
        charge = units * 2.00;
    }
    total_bill = charge;
    if (total_bill > 400) {
        surcharge = total_bill * 0.15;
        total_bill += surcharge;
    }
    if (total_bill < 100) {
        total_bill = 100;
  }
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Total Bill Amount: Rs. %.2f\n", total_bill);

    return 0;
}

