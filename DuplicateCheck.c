#include <stdio.h>
int main() {
    int num, foundDuplicate = 0;
    int numbers[100], count = 0; 
    printf("Enter numbers (enter a duplicate to stop): \n");
    while (1) {
        scanf("%d", &num);
        for (int i = 0; i < count; i++) {
            if (numbers[i] == num) {
                foundDuplicate = 1; 
                break;
            }
        }
        if (foundDuplicate)
            break; 
        numbers[count] = num;
        count++;
    }
    printf("Duplicate number %d detected! Program terminated.\n", num);
    return 0;
}

