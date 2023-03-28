#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int power(int, int);
int  handle_backslash(int *sum, char follow_char);
int _putchar(char c);
void handle_string(int *sum, char *s);
void handle_int(int *sum, int d);
int  handle_percision(char f, int *sum, va_list ap, int *i);
#endif
