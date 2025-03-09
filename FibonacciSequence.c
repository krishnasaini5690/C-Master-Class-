#include <stdio.h>
int main() {
    int a = 0, b = 1, next, count = 2; 
    int n = 10;
    printf("First %d Fibonacci numbers: \n", n);
    printf("%d, %d", a, b);
    while (count < n) {
        next = a + b; 
        printf(", %d", next);
        a = b; 
        b = next; 
        count++; 
    }
    printf("\n");
    return 0;
}

