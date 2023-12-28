#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to a string
 *
 * Return: Converted integer
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;

	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
	i++;

	while (s[i] == '-' || s[i] == '+')
	{
	if (s[i] == '-')
		sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
	if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > 7))
	{
	if (sign == 1)
	return (INT_MAX);
	else
	return (INT_MIN);
	}

	result = result * 10 + (s[i] - '0');
	i++;
	}

return (result * sign);
}
