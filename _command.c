#include "main.h"
/**
 * _printf - Describes a function.
 * @str: strings
 * Return: void
 */
void _printf(const char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
