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

int _printf(const char *format, ...);
int _strlen(const char *s);
int _abs(int n);
char *itoa(int value, char *buffer, int base);
char *_strcpy(char *dest, char *src);
void rev_string(char *s);
/*int printChar(va_list args, int *ans);*/
/*  int printString(va_list args, int *ans);*/

#endif
