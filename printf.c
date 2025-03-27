#include <assert.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    int i = 0;
    if (format == NULL)
    {
    	return (1);
    }

    va_start(args, format);
    while (format[i] != '\0')
    {
    	if (format[i] == '%')
        {
        	if (format[i++] == 'c')
            {
            	char character = va_arg(args, int);
                _putchar(character);
            }
            if (format[i++] == 's')
            {
            	const char * str = (const char *) va_arg(args, const char *);
                while(*str != '\0')
                {
                	_putchar(*str);
                    str++;
                }
            }
            if (format[i++] == '%')
            {
                _putchar('%');
            }
        }
        else
        {
            _putchar(format[i]);
	    i++;
        }
    }
}
