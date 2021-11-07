#include "main.h"
/*Este es el archivo de nuestra función _printf*/
/**
 * _printf - Emulate the behavior of printf original
 * @format: String constant of data
 * Return: Length (ans) of the output
 */
/*prototipo de nuestra funcion _print*/
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
