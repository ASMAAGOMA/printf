#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * _printf - a function that produces output according to a format
 * @format: argument
 * Return: the value of count (succes)
 */

int _printf(const char *format, ...)
{
	va_list args;
	char buffer[BUFFER_SIZE];
	int count = 0;
	const char *str, *ptr;
	char c = '\0';
	int i = 0;
	int buffer_i = 0;

	va_start(args, format);
	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr != '%')
		{
			buffer[buffer_i++] = *ptr;
			count++;
		}
		else
		{
			ptr++;
			if (*ptr == '!')
				continue;
			switch (*ptr)
			{
				case'c':
					{
						c = (char)va_arg(args, int);
						buffer[buffer_i++] = c;
						count++;
						break;
					}
					case's':
					{
						str = va_arg(args, char *);
						for (i = 0; str[i] != '\0'; i++)
							buffer[buffer_i++] = str[i];
						count += i;
						break;
					}
					case'%':
					{
						buffer[buffer_i++] = '%';
						count++;
						break;
					}
					default:
					{
						buffer[buffer_i++] = '%';
						count += 2;
						break;
					}
			}
		}
	}
	va_end(args);
	write(1, buffer, count);
	return (count);
}
