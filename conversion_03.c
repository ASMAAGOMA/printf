#include "main.h"
/**
 * convert_hX_s - convert h X to string
 * @l: variadic input.
 * Return: converted string.
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
 * @s: string to reverse.
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
	for (j = (len - 1); j >= 0; j--)
	{
		temp[i++] = s[j];
	}
	temp[i] = '\0';

	return (temp);
}
/**
 * rot13 - converts to rot 13.
 * @s: string input.
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
/**
 * convert_S - convert String.
 * @l: input to convert.
 * Return: a string
 */
char *convert_S(va_list l)
{
	unsigned int i, j, len = 0;
	char *r, *temp, *a;

	temp = va_arg(l, char*);
	if (temp == NULL)
		return (NULL);
	j = _strlen(temp);
	for (i = 0; i < j; i++)
	{
		if (temp[i] < 32 || temp[i] >= 127)
			len += 3;
		len++;
	}
	r = malloc(sizeof(char) * (len + 1));
	if (r == NULL)
		return (NULL);
	a = r;
	while (*temp)
	{
		if (*temp < 32 || *temp >= 127)
		{
			*a++ = '\\';
			*a++ = 'x';
			*a++ = *temp / 16 > 9 ? (*temp / 16) + 55 : (*temp / 16) + '0';
			*a++ = *temp % 16 > 9 ? (*temp % 16) + 55 : (*temp % 16) + '0';
		}
		else
			*a++ = *temp;
		temp++;
	}
	*a = '\0';
	return (r);
}
