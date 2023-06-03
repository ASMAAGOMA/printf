#ifndef MAIN_H
#define MAIN_H


#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * struct format_specifier - contains format specifiers for printf.
 * @flag: the flags in the format specifier. - + ' ' # 0.
 * @width: the minimum number of characters to be printed.
 * @w_bi: 1 when the width value is defined.
 * @precision: the minimum number of digit to be written.
 * @p_bi: 1 when there is a precision value.
 * @length: the length of the variable type. h and l.
 * @specifier: the type of the data to print. d, i, u, o
 * x, X, C, s, p, %, b, r, R
 */
typedef struct format_specifier
{
	char flag;
	unsigned int width;
	int w_bi;
	unsigned int precision;
	int p_bi;
	int length;
	char specifier;
} f_s;

int _printf(char *scount, ...);


unsigned int _intlen(int i);
unsigned int _strlen(char *s);
int _putchar(char c);
int _puts(char *s); 
int _puts_buffer(char *s, unsigned int l);

char *convert_d_s(va_list l);
char *convert_ld_s(va_list l);
char *convert_hd_s(va_list l);
char *convert_u_s(va_list l);
char *convert_lu_s(va_list l);

char *convert_hu_s(va_list l);
char *convert_o_s(va_list l);
char *convert_lo_s(va_list l);
char *convert_ho_s(va_list l);
char *convert_x_s(va_list l);

char *convert_lx_s(va_list l);
char *convert_hx_s(va_list l);
char *convert_X_s(va_list l);
char *convert_lX_s(va_list l);

char *convert_hX_s(va_list l);
char *reverse(char *s);
char *rot13(char *s);
char *convert_S(va_list l);

char *convert_b_s(va_list l);
char *convert_lb_s(va_list l);
char *convert_hb_s(va_list l);

char *get_num(char *str, f_s s);
char *get_value_fs(va_list l, f_s s);
f_s get_fs(char **scount, va_list l);
#endif

