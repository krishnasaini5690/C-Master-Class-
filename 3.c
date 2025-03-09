#include <stdio.h>
int main() {
    float kmph, mph;
    printf("Enter kilometers per hour: ");
    scanf("%f", &kmph);
    mph = kmph * 0.621371;
    printf("Speed in miles per hour: %f\n", mph);
    return 0;
}

