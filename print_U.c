#include "main.h"
/**
* print_U - function that prints unsigned number
* @args: var list type
* Return: returns int
*/
int print_U(va_list args)
{
	char buf[12];
	int g;
	int count;
	unsigned int s = va_arg(args, unsigned int);

	if (s == 0)
	{
		_putchar('0');
		return (1);
	}
	g = 11;
	buf[g--] = '\0';

	while (s != 0)
	{
		buf[g--] = s % 10 + '0';
		s /= 10;
	}
	count = 0;
	while (buf[++g] != '\0')
	{
		_putchar(buf[g]);
		count += 1;
	}

	return (count);
}
