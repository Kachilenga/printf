#include <stdarg.h>
#include "main.h"
/**
 * _printf- prinft function to print to stdout
 * @format: format specifier
 *
 * Return: 0
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, format);

	i = 0;
	if (format[i] == '%')
	{
		i++;
		switch (format[i])
		{
			case 'c':
			{
				int k = va_arg(args, int);

				_putchar(k);
				break;
			}

			case 's':
			{
				char *k = va_arg(args, char*);

				_putchar(*k);
				break;
			}

			case '%':
			{
				_putchar('%');
				break;
			}
		}
	}

	va_end(args);
	return (0);
}
