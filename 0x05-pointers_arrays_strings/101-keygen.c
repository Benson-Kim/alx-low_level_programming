#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;
    int has_lower = 0;
    int has_upper = 0;
    int has_digit = 0;

    srand(time(NULL));

    // Generate password
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        int r = rand() % 62;
        if (r < 10) {
            password[i] = '0' + r;
            has_digit = 1;
        }
        else if (r < 36) {
            password[i] = 'A' + (r - 10);
            has_upper = 1;
        }
        else {
            password[i] = 'a' + (r - 36);
            has_lower = 1;
        }
    }
    password[PASSWORD_LENGTH] = '\0';

    // Check if password meets requirements
    if (has_lower && has_upper && has_digit) {
        printf("%s\n", password);
    }
    else {
        // Regenerate password until it meets requirements
        while (!has_lower || !has_upper || !has_digit) {
            has_lower = 0;
            has_upper = 0;
            has_digit = 0;
            for (i = 0; i < PASSWORD_LENGTH; i++) {
                int r = rand() % 62;
                if (r < 10) {
                    password[i] = '0' + r;
                    has_digit = 1;
                }
                else if (r < 36) {
                    password[i] = 'A' + (r - 10);
                    has_upper = 1;
                }
                else {
                    password[i] = 'a' + (r - 36);
                    has_lower = 1;
                }
            }
            password[PASSWORD_LENGTH] = '\0';
        }
        printf("%s\n", password);
    }

    return 0;
}

