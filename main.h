#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
void handle_backslash(int *sum, char follow_char);
int _putchar(char c);
void handle_string(int *sum, char *s);
void handle_int(int *sum, int d);
void handle_percision(char f, int *sum, va_list ap, int *i);
int power(int, int);
#endif
