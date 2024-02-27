#include "main.h"
#include <stdio.h>

/**
 * swap_char - swap character.
 *
 * @a: char 1.
 * @b: char 2.
 */
void swap_char(char *a, char *b)
{
char tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * rev_string - write a function that reverses a string.
 *
 * @s: String to reverse.
 */
void rev_string(char *s)
{
	int i = 0;
	int length = _strlen(s) - 1;
while (length > i)
{
	swap_char(s + length, s + i);
	i++;
	length--;
}
}
/**
 * _strlen - count string
 *
 * @s: String
 * Return: length.
 */

int _strlen(char *s)
{
	int count, inc;
inc = 0;
	for (count = 0; s[count] != '\0'; count++)
		inc++;
	return (inc);
}
