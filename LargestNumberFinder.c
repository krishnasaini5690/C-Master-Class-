#include <stdio.h>
int main() {
    int a, b, c, d, e, max;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a > b) {
        if (a > c) {
            if (a > d) {
                if (a > e) {
                    max = a;
                } else {
                    max = e;
                }
            } else {
                if (d > e) {
                    max = d;
                } else {
                    max = e;
                }
            }
        } else {
            if (c > d) {
                if (c > e) {
                    max = c;
                } else {
                    max = e;
                }
            } else {
                if (d > e) {
                    max = d;
                } else {
                    max = e;
                }
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                if (b > e) {
                    max = b;
                } else {
                    max = e;
                }
            } else {
                if (d > e) {
                    max = d;
                } else {
                    max = e;
                }
            }
        } else {
            if (c > d) {
                if (c > e) {
                    max = c;
                } else {
                    max = e;
                }
            } else {
                if (d > e) {
                    max = d;
                } else {
                    max = e;
                }
            }
        }
    }
    printf("The largest number is: %d\n", max);
    return 0;
}

