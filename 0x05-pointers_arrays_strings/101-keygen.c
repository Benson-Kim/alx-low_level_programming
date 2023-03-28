#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

int main(void)
{
	const char valid_characters[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const int num_valid_characters = sizeof(valid_characters) - 1;
	char password[PASSWORD_LENGTH + 1];
	int i;
	int has_lower = 0;
	int has_upper = 0;
	int has_digit = 0;

	srand(time(NULL));

	// Generate password
	for (i = 0; i < PASSWORD_LENGTH; i++) {
		password[i] = valid_characters[rand() % num_valid_characters];
		if ('a' <= password[i] && password[i] <= 'z') {
			has_lower = 1;
		}
		else if ('A' <= password[i] && password[i] <= 'Z') {
			has_upper = 1;
		}
		else if ('0' <= password[i] && password[i] <= '9') {
			has_digit = 1;
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
				password[i] = valid_characters[rand() % num_valid_characters];
				if ('a' <= password[i] && password[i] <= 'z') {
					has_lower = 1;
				}
				else if ('A' <= password[i] && password[i] <= 'Z') {
					has_upper = 1;
				}
				else if ('0' <= password[i] && password[i] <= '9') {
					has_digit = 1;
				}
			}
			password[PASSWORD_LENGTH] = '\0';
		}
		printf("%s\n", password);
	}

	return 0;
}

