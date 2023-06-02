#include "main.h"

/**
 * _intlen - returns the length of a int.
 * @i: input string
 * Return: length
 */
unsigned int _intlen(int i)
{
	int l = 0;

	if (i == 0)
		l = 1;
	if (i < 0)
	{
		l++;
	}
	while (i != 0)
	{
		i /= 10;
		l++;
	}
	return (l);
}
/**
 * _strlen - returns the length of a string.
 * @s: input string
 * Return: length
 */
unsigned int _strlen(char *s)
{
	if (*s == '\0' || *s == '\n' || *s == 0)
		return (0);
	s++;
	return (1 + _strlen(s));
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - prints a string followed by a new line
 * @s: string to print.
 * Return: length of string.
 */
int _puts(char *s)
{
	while (*s != '\0')
		_putchar(*s++);

	_putchar('\n');
	return (_strlen(s));
}
/**
 * _puts_buffer - prints a buffer.
 * @s: buffer to print.
 * @l: length of buffer.
 * Return: length of string.
 */
int _puts_buffer(char *s, unsigned int l)
{
	unsigned int i = 0;

	while (i < l)
	{
		_putchar(*s++);
		i++;
	}
	return (l);
}
