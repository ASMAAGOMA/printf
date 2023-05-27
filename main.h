#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int print_unsigned(char *buffer, int buffer_i, unsigned int n, int base);
int print_address(char *buffer, int buffer_i, void *ptr_address);
int _printf_2(const char *format, ...);

#endif
