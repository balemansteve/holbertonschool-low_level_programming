#include "main.h"
#include <stdio.h>
/**
 *_puts - prints a string.
 *@str: string to print
 *
 *Description: prints a string.
 *On success: return the number of characters printed
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
