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
	    if (format[i+1] == 'c')
            {
            	char character = va_arg(args, int);
                _putchar(character);
		count++;
		i++;
            }
            else if (format[i+1] == 's')
            {
            	char * str = va_arg(args, char *);
                while(str[j] != '\0')
                {
		    _putchar(str[j]);
		    count++;
                    j++;
                }
		i++;
            }
            else if (format[i+1] == '%')
            {
                _putchar('%');
		count++;
		i++;
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
