#include "main.h"
/**
 * convert_d_s - convert int to string
 * @l: variadic input.
 * Return: converted string.
 */
char *convert_d_s(va_list l)
{
	int len, temp, a, i, j = 0;
	char *r;

	/*_puts("-------convert_d_s  0---------");*/
	temp = va_arg(l, int);
	len = _intlen(temp);
	r = malloc(sizeof(char) * len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	if (temp < 0)
	{
		r[0] = '-';
		temp *= -1;
		j++;
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
 * convert_ld_s - convert l int to string
 * @l: variadic input.
 * Return: converted string.
 */
char *convert_ld_s(va_list l)
{
	int len, i, j = 0;
	long int temp, a;
	char *r;

	/*_puts("-------convert_ld_s  0---------");*/
	temp = va_arg(l, long int);
	len = _intlen(temp);
	r = malloc(sizeof(char) * len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	if (temp < 0)
	{
		r[0] = '-';
		temp *= -1;
		j++;
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
 * convert_hd_s - convert h int to string
 * @l: variadic input.
 * Return: converted string.
 */
char *convert_hd_s(va_list l)
{
	int len, i, j = 0;
	short int temp, a;
	char *r;

	/*_puts("-----------");*/
	temp = (short) va_arg(l, int);
	len = _intlen(temp);
	r = malloc(sizeof(char) * len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	if (temp < 0)
	{
		r[0] = '-';
		temp *= -1;
		j++;
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
 * convert_u_s - convert int to string
 * @l: variadic input.
 * Return: converted string.
 */
char *convert_u_s(va_list l)
{
	int len, i, j = 0;
	unsigned int temp, a;
	char *r;

	temp = va_arg(l, unsigned int);
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
 * convert_lu_s - convert l int to string
 * @l: variadic input.
 * Return: converted string.
 */
char *convert_lu_s(va_list l)
{
	int len, i, j = 0;
	unsigned long int temp, a;
	char *r;

	temp = va_arg(l, unsigned long int);
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
