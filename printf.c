#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - a simple clone of c printf
 * @format: a format specifying what to print to the screen
 * Return: the number of characters in the string
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, sum = 0;
	va_list ap;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '\\')
		{
			handle_backslash(&sum, format[i + 1]);
		}
		else if (format[i] == '%')
		{
			handle_percision(format[i + 1], &sum, ap, &i);
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
		i++;

	}
	va_end(ap);
	return (sum);
}
