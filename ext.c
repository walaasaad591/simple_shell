#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * exit_command - haA program that handles exit command
 * @args: argument
 *
 */

void exit_command(char **args)
{
	int stat;

	if (_strcmp(args[0], "exit") == 0)
	{
		if (args[1] != NULL)
		{
			stat = int_converter(args[1]);
			exit(stat);
		}
		else
		{
			exit(EXIT_SUCCESS);
		}
	}
}
