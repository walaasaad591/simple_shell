#include "main.h"

/**
 * _strlen - A program to get the length of a string
 * @s: string
 * Return: returns the length of string
 */
int _strlen(char *s)
{
	int index;
	int length = 0;

	for (index = 0; s[index] != '\0'; ++index)
	{
		length++;
	}
	return (length);
}
