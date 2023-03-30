#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, sum = 0, len1, len2, i, j, k;

	len1 = strlen(n1);
	len2 = strlen(n2);

	if (len1 + 1 > size_r || len2 + 1 > size_r) {
		return 0;
	}

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 2;
	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0 || carry) {
		sum = carry;

		if (i >= 0) {
			sum += n1[i] - '0';
			i--;
		}

		if (j >= 0) {
			sum += n2[j] - '0';
			j--;
		}

		if (k < 0) {
			return 0;
		}

		carry = sum / 10;
		r[k] = sum % 10 + '0';
		k--;
	}

	return &r[k + 1];
}

