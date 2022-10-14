#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: separe strings
 * @n: int, number of undefined arguments
 *
 * Return: ...
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *c;

	if (separator == NULL)
		return;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char*);
		if (c == NULL)
		{
			c = "(nil)";
		}
		printf("%s", c);
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	_putchar('\n');
}
