#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct printTypes - Basic structure of printf
 * @formato: id of char, char *, int, ...
 * @f: Function that selects the data type
 * Description: id and function of printf
 */
typedef struct printTypes
{
	char *formato;
	int (*f)();
} pt;


int _putchar(char c);
int _strlen(const char *s);
char *_strcpy(char *dest, char *src);
int _printf(const char *format, ...);
#endif
