#include "main.h"
/**
 * print_hex-prints hexadecimal
 * @u:unsigned int
 * @c:char
 * Return:returns an int
 */
int print_hex(unsigned int u, char c)
{
	const char *hex_digits = "0123456789abcdef0123456789ABCDEF";
	char buffer[50];
	char *ptr = &buffer[49];
	int count = 0;

	if (u == 0)
	{
		_putchar('0');
		return (1);
	}

	*ptr = '\0';

	while (u != 0)
	{
		*--ptr = hex_digits[u % 16 + (c ? 16 : 0)];
		u /= 16;
	}
	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
		count++;
	}

	return (count);
}

/**
 * print_hexa-prints lowercase hexadecimal
 * @args:va_list type
 * Return:returns int
 */
int print_hexa(va_list args)
{
	return (print_hex(va_arg(args, unsigned int), 'a'));
}

/**
 * print_hexA-prints uppercase hexadecimal
 * @args:va_list type
 * Return:returns int
 */
int print_hexA(va_list args)
{
	return (print_hex(va_arg(args, unsigned int), 'A'));
}
