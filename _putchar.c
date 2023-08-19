#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes out a charactor
 * @c: charactor to be written
 *
 * Return: void
 *
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
