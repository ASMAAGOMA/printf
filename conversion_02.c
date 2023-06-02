#include "main.h"
/**
 * convert_lx_s - convert l int to string
 * @l: variadic input.
 * Return: converted string.
 */
char *convert_lx_s(va_list l)
{
	int len = 0, i, j = 0;
	unsigned long int temp, a;
	char *r;

	temp = va_arg(l, long int);
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
/**
 * convert_hx_s - convert h int to h x  to string
 * @l: variadic input.
 * Return: converted string.
 */
char *convert_hx_s(va_list l)
{
	int len = 0, i, j = 0;
	unsigned short int temp, a;
	char *r;

	temp = (short) va_arg(l, int);
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
	for (i = len - 1; i >= j; i--)
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
/**
 * convert_X_s - convert int to X to string
 * @l: variadic input.
 * Return: converted string.
 */
char *convert_X_s(va_list l)
{
	int len, i, j = 0;
	unsigned int temp, a;
	char *r;

	temp = va_arg(l, int);
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
	for (i = len - 1; i >= j; i--)
	{
		a = temp % 16;
		if (a > 9)
		{
			r[i] = a + 55;
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
/**
 * convert_lX_s - convert l int to l X to string
 * @l: variadic input.
 * Return: converted string.
 */
char *convert_lX_s(va_list l)
{
	int len, i, j = 0;
	unsigned long int temp, a;
	char *r;

	temp = va_arg(l, long int);
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
	for (i = len - 1; i >= j; i--)
	{
		a = temp % 16;
		if (a > 9)
		{
			r[i] = a + 55;
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
