#include "main.h"
/**
 *print_int - function
 *@buffer: array of output
 *@buffer_i:current index
 *@n: numder
 *Return: buffer_i
 */
int print_int(char *buffer, int buffer_i, int n)
{
	unsigned int num;
	int i = 0;
	char str[11];

	if (n < 0)
	{
		buffer[buffer_i++] = '-';
		n = -n;
	}

	num = n;

	do {
		str[i++] = '0' + (num % 10);
		num /= 10;
	} while (num > 0);

	while (i > 0)
	{
		buffer[buffer_i++] = str[--i];
	}
	return (buffer_i);
}
