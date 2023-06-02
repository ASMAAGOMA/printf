#include "main.h"
/**
 * convert_d_s - convert int to string
 * @l: variadic input.
 * Return: converted string.
 * 
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
 * 
*/
char *convert_ld_s(va_list l)
{
	int len, i, j = 0;
	long int temp, a;
	char *r;

	/*_puts("-------convert_ld_s  0---------");*/
	temp = va_arg(l, long int);
	len = _intlen(temp);
	/**t = len + '0';
	*_putchar(t);
	*_puts("\n");
	*/
	r = malloc(sizeof(char) * len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	if (temp < 0){
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
 * 
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
 * 
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
 * 
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

	temp = va_arg(l, int);
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

	temp = (short) va_arg(l, int);
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
/**
 * convert_lx_s - convert l int to string
 * @l: variadic input.
 * Return: converted string.
 * 
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
 * 
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
 * 
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
 * 
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
/**
 * convert_hX_s - convert h X to string
 * @l: variadic input.
 * Return: converted string.
 * 
*/
char *convert_hX_s(va_list l)
{
	int len, i, j = 0;
	unsigned short int temp, a;
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
 * reverse - reverse a string.
 * @str: string to reverse.
 * Return: reversed string.
 */
char *reverse(char *s)
{
	long int i = 0, j, len;
	char *temp;

	if (s == NULL)
	{
		return (NULL);
	}
	len = _strlen(s);
	temp = malloc(sizeof(char) * (len + 1));
	if (temp == NULL)
	{
		return (NULL);
	}
	for(j = (len - 1); j >= 0; j--)
	{
		temp[i++] = s[j];
	}
	temp[i] = '\0';

	return (temp);
}
/**
 * rot13 - converts to rot 13.
 * @str: string input.
 * Return: returns a string to print.
 */
char *rot13(char *s)
{
	char *temp;
	long int i = 0, len;

	if (s == NULL)
	{
		return (NULL);
	}
	len = _strlen(s);
	temp = malloc(sizeof(char) * (len + 1));
	if (temp == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			temp[i] = s[i] + 13;
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
		{
			temp[i] = s[i] - 13;
		}
		else
			(temp[i] = s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
