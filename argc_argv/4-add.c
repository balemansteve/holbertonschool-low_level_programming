#include "main.h"

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
	int sum, i, digit;
	for(i = 1; i < argc; i++)
	{
		for(digit = 0; argv[digit][i]; digit++)
		{
			if (argv[digit][i] < 0 || argv[digit][i] > 9)
			{	
				printf("Error\n");
				return (1);
			}
		
		sum += atoi(argv[i]);
		}
	}	
	printf("%d\n", sum);	
        return (0);
}
