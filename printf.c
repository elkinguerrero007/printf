#include "main.h"
#include <stdio.h>
/*Este es el archivo de nuestra función _printf*/

int printChar(va_list args);
int printString(va_list args);
int printPercentage(va_list args);
int printInteger(va_list args);

/**
 * _printf - Emulate the behavior of printf original
 * @format: String constant of data
 * Return: Length (ans) of the output
 */

/*prototipo y cuerpo de nuestra funcion _print*/
int _printf(const char *format, ...)
{
unsigned int i;
int ans = 0;
va_list args;
pt types[] = {
/*declaramos nuestra lista*/
{"c", printChar},
{"s", printString},
{"%", NULL},
{NULL, NULL}
};
int notfound = 1;

	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	va_start(args, format);

	while (format != NULL && *format != '\0')
	{
		if (*format  == '%')
		{
			format++;
			for (i = 0; types[i].formato != NULL; i++)
			{
				if (*format == *(types[i].formato))
				{
					ans += types[i].f(args);
					format++;
					notfound = 0;
					break;
				}
			}
			if (notfound)
				ans += write(1, format - 1, 1);
		}
		else
		{
			ans += write(1, format++, 1);
		}
	}
	va_end(args);
	return (ans);
}

/**
 * printChar - Prints a character
 * @args: Argument passed
 *
 * Return: length of data
 */
int printChar(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}
/**
 * printString - Prints a string
 * @args: Argument passed
 *
 * Return: length of data
 */
int printString(va_list args)
{
	char *str = va_arg(args, char *);
	int size;

	if (str == NULL)
		str = "(null)";
	size = _strlen(str);
	return (write(1, str, size));
}

/**
 * printPercentage - Prints a percent
 * @args: Argument passed
 *
 * Return: length of data
 */
int printPercentage(va_list args)
{
	char p = '%';

	(void) args;
	return (write(1, &p, 1));
}

/**
 * printInteger - Prints an integer
 * @args: Argument passed
 *
 * Return: length of data
 */
int printInteger(va_list args)
{
	char buff[33];
	char *str;
	int num = va_arg(args, int);
	int size;

	str = itoa(num, buff, 10);
	size = _strlen(str);

	return (write(1, str, size));
}
