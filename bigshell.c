#include "bigshell.h"
/**
 * main - Entry point of the program
 * @ac: Count arguments
 * @av: Arguments vector, name of the program
 * @env: Array of pointers to environment variables
 * Return: 0
 */
int main(__attribute__((unused)) int ac, char **av)
{
	char *strn;
	size_t size;
	int count_commands = 0;

	signal(SIGINT, SIG_IGN);
	do {
		count_commands++;
		strn = NULL;
		size = 0;
		checkinfo(strn, size, count_commands, av);
	} while (1);
	return (0);
}
