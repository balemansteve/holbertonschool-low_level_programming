#include "main.h"
#include "ctype.h"
/**
 * main - sum numbers of the arguments.
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 1 error, 0 passed.
 *
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i, digit;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);

		for (digit = 0; argv[i][digit]; digit++)
		{
			if (!isdigit(argv[i][digit]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
