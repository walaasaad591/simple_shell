#include "main.h"
#include <string.h>

/**
 * _strcpy - A function that copies a strings
 * @destination: Points to the destination.
 * @strings: Points to a string.
 * Return: pointer
 */
char *_strcpy(char *destination, const char *strings)
{
	char *p = destination;

	while (*strings != '\0')
	{
		*destination++ = *strings++;
	}
	return (p);
}
