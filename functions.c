#include <math.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - print char
 * @c: a character.
 * Return: Printed char.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
