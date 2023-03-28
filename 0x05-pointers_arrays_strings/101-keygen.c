#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
	const char valid_characters[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const int num_valid_characters = sizeof(valid_characters) - 1;
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++) {
		password[i] = valid_characters[rand() % num_valid_characters];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return 0;
}

