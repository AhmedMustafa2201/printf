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


/**
 * handle_backslash - catch backslash charachter.
 * @sum: pointer number of sum.
 * @follow_char: the next char.
 * Nothing to Return.
 */
void handle_backslash(int *sum, char follow_char)
{
	if (follow_char == 'n' || follow_char == 'a' || follow_char == 'b' ||
			follow_char == 'f' || follow_char == 'r' ||
			follow_char == 't' || follow_char == 'v')
	{
		_putchar('\\' + follow_char);
		*sum = *sum + 2;
	}
	else
	{
		_putchar(follow_char);
	}
}

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
		temp =  d / pow(10, count - 1);
		_putchar(48 + temp);
		d -= (temp * floor(pow(10, count - 1)));
		count--;
	}
}

void handle_percision(char f, int sum, va_list ap, inti)
{
	char c, s;
	int d;

	switch (f)
	{
		case 's':
			s = va_arg(ap, char);
			handle_string(sum, s);
			*i += 1;
			break;
		case 'c':
			c = (char) va_arg(ap, int);
			_putchar(c);
			*i += 1;
			break;
		case 'd':
		case 'i':
			d = va_arg(ap, int);
			handle_int(sum, d);
			*i += 1;
			break;
	}
}
