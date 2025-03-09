#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Number    Cube\n");
    for (int i = 1; i <= n; i++) {
        printf("%d   %d\n", i, i * i * i);
    }
    return 0;
}

