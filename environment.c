#include "main.h"

/**
 * _getenv - get environment variables
 * @env_var: environment variable
 * Return: environment variable result, its content
 */

char *_getenv(char *env_var)
{
	int i = 0, j;
	int stat;

	while (environ[i])
	{
		stat = 1;

		for (j = 0; environ[i][j] != '='; j++)
		{
			if (environ[i][j] != env_var[j])
				stat = 0;
		}
		if (stat == 1)
			break;
		i++;
	}
	return (&environ[i][j + 1]);
}

/**
 * _env - prints environment
*/
void _env(void)
{
	int i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
