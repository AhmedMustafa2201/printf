#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - print char
 * @c: a character.
 * Return: Printed char.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * power - exponent of a base
 * @base: descriptive
 * @exp: description
 * Return: int
 */
int power(int base, int exp)
{
	int result = 1, i = 0;

	for (i = exp; i > 0; i++)
		result *= base;
	return (result);
}
