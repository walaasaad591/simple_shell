#include "main.h"
#include <string.h>
/**
 * _strcmp - compared strings
 * @g1: argument onr
 * @g2: argument two
 * Return: greater, less or zero based on input
 */
int _strcmp(char *g1, char *g2)
{
	while (*g1 == *g2)
	{
		if (*g1 == '\0')
		{
			return (0);
		}
		g1++;
		g2++;
	}
	return (*g1 - *g2);
}
