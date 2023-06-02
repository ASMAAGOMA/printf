#include "main.h"
/**
 * convert_b_s - convert int to binary.
 * @l: input to convert.
 * Return: a string
 */
char *convert_b_s(va_list l)
{
    int i, j = 0;
    unsigned int temp, a;
    char *r;

    temp = va_arg(l, unsigned int);
    a = temp;
    while (a != 0)
    {
        a /= 2;
        j++;
    }
    r = malloc(sizeof(char) * (j + 1));
    if (r == NULL)
        return (NULL);
    a = temp;
    for (i = j - 1; i >= 0; i--)
    {
        r[i] = (a % 2) + '0';
        a /= 2;
    }
    r[j] = '\0';
    return (r);
}
/**
 * convert_lb_s - convert int to binary.
 * @l: input to convert.
 * Return: a string
 */
char *convert_lb_s(va_list l)
{
    int i, j = 0;
    unsigned long int temp, a;
    char *r;

    temp = va_arg(l, unsigned long int);
    a = temp;
    while (a != 0)
    {
        a /= 2;
        j++;
    }
    r = malloc(sizeof(char) * (j + 1));
    if (r == NULL)
        return (NULL);
    a = temp;
    for (i = j - 1; i >= 0; i--)
    {
        r[i] = (a % 2) + '0';
        a /= 2;
    }
    r[j] = '\0';
    return (r);
}
/**
 * convert_hb_s - convert int to binary.
 * @l: input to convert.
 * Return: a string
 */
char *convert_hb_s(va_list l)
{
    int i, j = 0;
    unsigned short int temp, a;
    char *r;

    temp = (short) va_arg(l, unsigned int);
    a = temp;
    while (a != 0)
    {
        a /= 2;
        j++;
    }
    r = malloc(sizeof(char) * (j + 1));
    if (r == NULL)
        return (NULL);
    a = temp;
    for (i = j - 1; i >= 0; i--)
    {
        r[i] = (a % 2) + '0';
        a /= 2;
    }
    r[j] = '\0';
    return (r);
}
