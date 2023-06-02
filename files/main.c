#include "main.h"
#include <stdio.h>

/**
 * main - entry function
 * Return: 0 on sucess
 */
int main(void)
{
    _puts("-----main----");
    _printf("trinyg to print %li.", 12345678);
    _printf("trinyg to print %*i \n", 5, 20);
    _printf("Integers: %+i  \n", 3456);
    _printf("Integers: %+u \n", 3456);
    _printf("Some different radices: %o \n", 100);
    _printf("Some different radices: %x \n", 100);
    _printf("Some different radices: %X \n", 100);
    _printf("this is %R \n", "TRRXF SBE TRRXF");
    _printf("this is %r \n", "TRRXF SBE TRRXF");
    _printf("this is %s \n", "GEEKS FOR GEEKS");
    _printf("this is %% \n");
    _printf("trinyg to print %d %d \n", 5, 20);
    _printf("trinyg to print %*i \n", 5, 20);
    _printf("trinyg to print %.*i \n", 5, 20);
    _printf("trinyg to print %-5i \n", 20);
    /*
    _printf("trinyg to print %i, %d, %i, %d.", -1000, 200, 40, 2);
    */
    return (0);
}
