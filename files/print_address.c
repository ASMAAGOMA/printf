#include "main.h"

/**
 *print_address -print the dress in hex
 *@buffer: array where the output stored
 *@buffer_i: thr current index
 *@ptr_address: pointer to the address
 *Return: count(success)
 */

int print_address(char *buffer, int buffer_i, void *ptr_address)
{
	unsigned long address = (unsigned long)ptr_address;
	char digits[] = "0123456789ABCDEF";
	char temp[50];
	int count = 0;
	int temp_i = 0;

	while (address > 0)
	{
		temp[temp_i++] = digits[address % 16];
		address /= 16;
	}
	while (temp_i > 0)
	{
		buffer[buffer_i++] = temp[--temp_i];
		count++;
	}
	return (count);
}
