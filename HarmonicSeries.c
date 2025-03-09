#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;
    printf("Enter the number of terms for the harmonic series: ");
    scanf("%d", &n);
    printf("Harmonic Series: ");
    for (int i = 1; i <= n; i++) {
        printf("1/%d", i);
        if (i < n) 
            printf(" + "); 
       sum += 1.0 / i; 
    }
    printf("\nSum of the harmonic series up to %d terms: %.4f\n", n, sum);
    return 0;
}

