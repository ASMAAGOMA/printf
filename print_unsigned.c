#include "main.h"
/**
 * print_helper - function to convert the unsigned number
 * to the desired numder system
 * @buffer: array where the output is stored
 * @buffer_i: the current index
 * @n: the num to be converted
 * @base: the base of the desired number system
 * Return: the value of count(success)
 */

int print_helper(char *buffer, int buffer_i, unsigned int n, int base)
{
	char digits[] = "0123456789ABCDEF";
	char temp[50];
	int count = 0;
	int temp_i = 0;

	if (n == 0)
	{
		buffer[buffer_i++] = '0';
		count++;
	}
	else
	{
		while (n > 0)
		{
			temp[temp_i++] = digits[n % base];
			n /= base;
		}
		while (temp_i >= 0)
		{
			buffer[buffer_i++] = temp[temp_i--];
			count++;
		}
	}
	return (count);
}

