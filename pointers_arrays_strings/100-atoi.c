#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to a string
 *
 * Return: Converted integer
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
		sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result = result * 10 + (s[i] - '0');
				i++;
			}
			break;
		}
		i++;
	}
	return (result * sign);
}

