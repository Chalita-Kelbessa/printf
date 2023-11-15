#include "main.h"
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * _printf - alt functions to printf
 *
 * @format: inpur format str
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	collect v[] = {
		{"%c", prt_char}, {"%s", prt_stg}, {"%%", prt37}, {"%d", prt_dx}, {"%i", prt_in}
	};
	va_list xarg;
	int k = 0, cleng = 0;
	int m;

	va_start(xarg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[k] != '\0')
	{
		m = 5;
		while (m >= 0)
		{
			if (v[m].id[0] == format[k] && v[m].id[1] == format[k + 1])
			{
				k = k + 2;
				cleng = cleng + v[m].f(xarg);

				goto Here;
			}
		}
		_putchar(format[k]);
		k++;
		cleng++;
	}
	va_end(xarg);
	return (cleng);
}
