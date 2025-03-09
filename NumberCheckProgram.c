#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0) { 
        if (num > 0) { 
            printf("The number is positive.\n");
            if (num % 2 == 0) {
                printf("It is an even number.\n");
            } else {
                printf("It is an odd number.\n");
            }
        } else { 
            printf("The number is zero.\n");
        }
    } else { 
        printf("The number is negative.\n");
    }
    return 0;
}

