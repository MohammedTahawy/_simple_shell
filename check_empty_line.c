#include "main.h"

/**
 * empty_line - checks if exists a empty line
 * @buffer: line
 * Return: 0 or 1 (int)
 */

int empty_line(char *buffer)
{
	int i;

	for (i = 0; buffer[i] != '\0'; i++)
	{
		if (buffer[i] != ' ')
			return (0);
	}
	return (1);
}
