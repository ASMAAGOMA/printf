#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#define BUFFER_SIZE 1024

int print_unsigned(char *buffer, int buffer_i, unsigned int n, int base);

/**
 *_printf - function to print any thing
 *@format: argument
 *Return: count(success)
 */
int _printf_2(const char *format, ...)
{
	va_list args;
	char buffer[BUFFER_SIZE];
	const char *ptr;
	int i = 0, buffer_i = 0, count = 0;
	unsigned int ui;

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
				case'd':
					i = va_arg(args, int);
					if (i < 0)
					{
						buffer[buffer_i++] = '-';
						count++;
						i = -i;
					}
					ui = (unsigned int)i;
					count += print_unsigned(buffer, buffer_i, ui, 10);
					break;
				case'u':
					ui = va_arg(args, unsigned int);
					count += print_unsigned(buffer, buffer_i, ui, 10);
					break;
				default:
					buffer[buffer_i++] = '%';
					count++;
					buffer[buffer_i++] = *ptr;
					count++;
					break;
			}
		}
	}
			va_end(args);
			write(1, buffer, count);
			return (count);
}


