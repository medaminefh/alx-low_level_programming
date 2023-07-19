#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int opc, i;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	opc = atoi(argv[1]);

	if (opc < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (i = 0; i < opc; i++)
	{
		if (i == opc - 1)
		{
			printf("%02hhx\n", a[i]);
			return (0);
		}
		printf("%02hhx ", a[i]);
	}
	return (0);
}
