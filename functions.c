#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * handle_backslash - catch backslash charachter.
 * @sum: pointer number of sum.
 * @follow_char: the next char.
 * Nothing to Return.
 */
int  handle_backslash(int *sum, char follow_char)
{
	if (follow_char == 'n' || follow_char == 'a' || follow_char == 'b' ||
			follow_char == 'f' || follow_char == 'r' ||
			follow_char == 't' || follow_char == 'v')
	{
		_putchar('\\' + follow_char);
		*sum = *sum + 1;
	}
	else
	{
		_putchar(follow_char);
		*sum += 1;
	}
	return (0);
}

/**
 * handle_string - catching string.
 * @sum: pointer number of sum.
 * @s: pointer to char.
 * Nothing to Return.
 */
void handle_string(int *sum, char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		_putchar(s[j]);
		j++;
		*sum += 1;
	}
}


/**
 * handle_int - catch integer byte.
 * @sum: pointer number of sum.
 * @d: the number itself.
 * Nothing to Return.
 */
void handle_int(int *sum, int d)
{
	int count = 0, temp = 0, n;

	if (d < 0)
	{
		_putchar('-');
		*sum += 1;
		d *= -1;
	}

	n = d;
	do {
		n /= 10;
		++count;
	} while (n != 0);

	*sum += count;
	while (count)
	{
		temp =  d / power(10, count - 1);
		_putchar(48 + temp);
		d -= (temp * power(10, count - 1));
		count--;
	}
}

/**
 * handle_percision - grabbing switch logic to handle various prints.
 * @f: the use case char.
 * @sum: pointer number of sum.
 * @ap: list of args from va_list type.
 * @i: the number indicator.
 * Nothing to Return.
 */
int handle_percision(char f, int *sum, va_list ap, int *i)
{
	char c, *s;
	long d;

	switch (f)
	{
		case 's':
			s = va_arg(ap, char *);
			handle_string(sum, s);
			*i += 1;
			break;
		case 'c':
			c = (char) va_arg(ap, int);
			_putchar(c);
			*i += 1;
			*sum += 1;
			break;
		case 'd':
		case 'i':
			d = va_arg(ap, int);
			handle_int(sum, d);
			*i += 1;
			break;
		case '%':
			_putchar('%');
			*i += 1;
			*sum += 1;
			break;
		default:
			_putchar(' ');
			*i += 1;
			*sum += 1;
			break;
	}
	return (0);
}
