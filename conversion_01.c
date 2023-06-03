#include "main.h"
/**
 * convert_hu_s - convert h int to string
 * @l: variadic input.
 * Return: converted string.
 *
*/
char *convert_hu_s(va_list l)
{
	int len, i, j = 0;
	unsigned short int temp, a;
	char *r;

	/*_puts("-------convert_d_s  0---------");*/
	temp = (short) va_arg(l, unsigned int);
	len = _intlen(temp);
	r = malloc(sizeof(char) * len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = len - 1; i >= j; i--)
	{
		a = temp % 10;
		r[i] = a + '0';
		temp = (temp - a) / 10;
	}
	r[len] = '\0';
	return (r);
}
/**
 * convert_o_s - convert int to string
 * @l: variadic input.
 * Return: converted string.
 *
*/
char *convert_o_s(va_list l)
{
	int len = 0, i, j = 0;
	unsigned int temp, a;
	char *r;

	temp = va_arg(l, unsigned int);
	a = temp;
	while (a != 0)
	{
		a /= 8;
		len++;
	}
	r = malloc(sizeof(char) * len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = len - 1; i >= j; i--)
	{
		a = temp % 8;
		r[i] = a + '0';
		temp = (temp - a) / 8;
	}
	r[len] = '\0';
	return (r);
}
/**
 * convert_lo_s - convert l int to string
 * @l: variadic input.
 * Return: converted string.
 *
*/
char *convert_lo_s(va_list l)
{
	int len = 0, i, j = 0;
	unsigned long int temp, a;
	char *r;

	temp = va_arg(l, unsigned long int);
	a = temp;
	while (a != 0)
	{
		a /= 8;
		len++;
	}
	r = malloc(sizeof(char) * len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = len - 1; i >= j; i--)
	{
	a = temp % 8;
	r[i] = a + '0';
	temp = (temp - a) / 8;
	}
	r[len] = '\0';
	return (r);
}
/**
 * convert_ho_s - convert h int to string
 * @l: variadic input.
 * Return: converted string.
 *
*/
char *convert_ho_s(va_list l)
{
	int len, i, j = 0;
	unsigned short int temp, a;
	char *r;

	temp = (short) va_arg(l, unsigned int);
	a = temp;
	while (a != 0)
	{
		a /= 8;
		len++;
	}
	r = malloc(sizeof(char) * len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = len - 1; i >= j; i--)
	{
		a = temp % 8;
		r[i] = a + '0';
		temp = (temp - a) / 8;
	}
	r[len] = '\0';
	return (r);
}
/**
 * convert_x_s - convert int to string
 * @l: variadic input.
 * Return: converted string.
 *
*/
char *convert_x_s(va_list l)
{
	int len = 0, i, j = 0;
	unsigned int temp, a;
	char *r;

	temp = va_arg(l, unsigned int);
	a = temp;
	while (a != 0)
	{
		a /= 16;
		len++;
	}
	r = malloc(sizeof(char) * len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = len - 1;  i >= j ; i--)
	{
		a = temp % 16;
		if (a > 9)
		{
			r[i] = a + 87;
		}
		else
		{
			r[i] = a + '0';
		}
		temp = (temp - a) / 16;
	}
	r[len] = '\0';
	return (r);
}
