include "_printf.h"
/**
 * get_func-function that returns function pointer
 * @inp: char variable
 * Return: return function pointer
 */

int (*get_func(char inp))(va_list)
{
       	int i = 0;
	spec types[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percentage},
	{"d", print_double},
	{"i", print_integer},
	{NULL, NULL}
};

	while (types[i].type)
	{
		if (inp == types[i].type[0])
			return types[i].funcptr;
		i++;
	}
	return (NULL);
}
