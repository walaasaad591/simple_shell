#include "main.h"
/**
 * int_converter - a function tha convert strings
 * @str: string to the argument
 * Return: converted int
 */
int int_converter(const char *str)
{
	int r = 0;
	int s = 1;
	int j = 0;

	while (str[j] == ' ')
	{
		j++;
	}
	if (str[j] == '+' || str[j] == '-')
	{
		s = (str[j++] == '-') ? -1 : 1;
	}
	while (str[j] >= '0' && str[j] <= '9')
	{
		r = r * 10 + (str[j] - '0');
		j++;
	}
	return (s * r);
}
