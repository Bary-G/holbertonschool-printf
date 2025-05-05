#include "main.h"
#include <unistd.h>

/**
  * print_number_base - convert number into another base
  * @num: number
  * @base: base
  * @uppercase: verify if uppercase or not
  * Return: converted number
  */
void print_number_base(unsigned long num, int base, int uppercase)
{
	char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
	char buffer[50];
	int i = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		return;
	}
	while (num > 0)
	{
		buffer[i++] = digits[num % base];
		num /= base;
	}
	while (i > 0)
	{
		write(1, &buffer[--i], 1);
	}
}
