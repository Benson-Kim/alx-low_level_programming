/**
 * rot13 - Encodes a string using rot13 encryption
 *
 * @str: Pointer to string
 *
 * Return: Pointer to the resulting string
 */

char *rot13(char *str)
{
	char *s = str;
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *orig = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int i, j;

	while (*s)
	{
		for (i = 0; orig[i]; i++)
		{
			if (*s == orig[i])
			{
				for (j = 0; j < 26; j++)
				{
					if (*s == orig[j])
					{
						*s = rot[j];
						break;
					}
				}
				break;
			}
		}
		s++;
	}
	return (str);
}

