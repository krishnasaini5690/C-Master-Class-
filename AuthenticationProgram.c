#include <stdio.h>
int main() {
    char username[20], password[20];
    char correctUsername[] = "krishna";
    char correctPassword[] = "krishnasaini123";
    int i, isUsernameCorrect = 1, isPasswordCorrect = 1;
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    i = 0;
    if (1) { 
        while (username[i] != '\0' || correctUsername[i] != '\0') {
            if (username[i] != correctUsername[i]) {
                isUsernameCorrect = 0;
                break;
            }
            i++;
        }
        if (isUsernameCorrect) {
            i = 0;
            if (1) { 
                while (password[i] != '\0' || correctPassword[i] != '\0') {
                    if (password[i] != correctPassword[i]) {
                        isPasswordCorrect = 0;
                        break;
                    }
                    i++;
                }

                if (isPasswordCorrect) {
                    printf("Authentication successful! Welcome, %s.\n", username);
                } else {
                    printf("Incorrect password. Access denied.\n");
                }
            }
        } else {
            printf("Invalid username. Access denied.\n");
        }
    }

    return 0;
}

