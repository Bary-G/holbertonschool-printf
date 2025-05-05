#include <assert.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include "main.h"

/**
  * _printf - print text with desired format
  * @i: array navigation int
  * @j: array navigation int under conditions
  * Return: string length
  */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	int count = 0;
	if (format == NULL)
	{
		return (1);
	}

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char character = va_arg(args, int);
				_putchar(character);
				count++;
			}
			else if (format[i] == 'd')
			{
				int integer = va_arg(args, int);
				if (integer < 0)
				{
					count += _putchar('-');
					integer = -integer;
				}
				count += print_number_rec(integer);
				count++;
			}
			else if (format[i] == 'i')
			{
				int integer = va_arg(args, int);
				if (integer < 0)
				{
					count += _putchar('-');
					integer = -integer;
				}
				count += print_number_rec(integer);
				count++;
			}
			else if (format[i] == 's')
			{
				char* str = va_arg(args, char*);
				while (str[j] != '\0')
				{
					_putchar(str[j]);
					count++;
					j++;
				}
			}
			else if (format[i] == 'u')
			{
				print_number_base(va_arg(args, unsigned int), 10, 0);
			}
			else if (format[i] == 'o')
			{
				print_number_base(va_arg(args, unsigned int), 8, 0);
			}
			else if (format[i] == 'x')
			{
				print_number_base(va_arg(args, unsigned int), 16, 0);
			}
			else if (format[i] == 'X')
			{
				print_number_base(va_arg(args, unsigned int), 16, 0);
			}
			else if (format[i] == 'p')
			{
				write(1, "0x", 2);
				print_number_base(va_arg(args, unsigned long), 16, 0);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	return (count);
}
