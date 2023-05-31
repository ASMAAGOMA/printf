#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#define BUFFER_SIZE 1024
/**
 * _printf_3 - function to print some thing
 * @buffer: output array
 * @buffer_i:current index
 * @n: the num
 * Return:integer valuue when success
 */

int print_int(char *buffer, int buffer_i, int n);
int print_helper(char *buffer, int buffer_i, unsigned int n, int base);
int print_address(char *buffer, int buffer_i, void *ptr_address);
/**
 * _printf_3 - function to print some thing
 * @format:argument
 * Return: count
 */
int _printf_(const char *format, ...)
{
	va_list args;
	char buffer[BUFFER_SIZE];
	const char *ptr;
	int buffer_i = 0, count = 0, num;
	unsigned int ui;
	void *ptr_address;

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
				case 'u':
					ui = va_arg(args, unsigned int);
					count += print_helper(buffer, buffer_i, ui, 10);
					break;
				case 'x':
					ui = va_arg(args, unsigned int);
					count += print_helper(buffer, buffer_i, ui, 16);
					break;
				case 'X':
					ui = va_arg(args, unsigned int);
					count += print_helper(buffer, buffer_i, ui, -16);
					break;
				case 'p':
					ptr_address = va_arg(args, void *);
					buffer[buffer_i++] = 'O';
					buffer[buffer_i++] = 'x';
					count += 2;
					count += print_address(buffer, buffer_i, ptr_address);
					break;
				case '%':
					buffer[buffer_i++] = '%';
					count++;
					break;
				case 'd':
					num = va_arg(args, int);
					buffer_i = print_int(buffer, buffer_i, num);
					count += buffer_i;
					break;
				default:
					buffer[buffer_i++] = '%';
					buffer[buffer_i++] = *ptr;
					count += 2;
					break;
			}
		}
	}
	buffer[buffer_i] = '\0';
	va_end(args);
	write(1, buffer, count);
	return (count);
}
