#include <stdio.h>
int main() {
    int num, originalNum, revNum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num; 
    while (num > 0) {
        rem = num % 10;
        revNum = revNum * 10 + rem; 
        num /= 10; 
    }
    if (originalNum == revNum)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);
    return 0;
}

