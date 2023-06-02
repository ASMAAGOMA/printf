#include "main.h"
/**
 * _printf - prints a string with given arguments
 * @scount: format string to use.
 * Return: string printed, or -1 on error.
 */
int _printf(char *scount, ...)
{
    va_list l;
    f_s s;
    int a;
    unsigned int r = 0, len = 0;
    char *buffer, *temp;

    if (scount == NULL || (scount[0] == '%' && !scount[1]))
    {
        return (-1);
    }
    if (scount[0] == '%' && scount[1] == ' ' && !scount[2])
	    return (-1);
    buffer = malloc(sizeof(char) * 1025);
    if (buffer == NULL)
    {
        return (-1);
    }
   
    va_start(l, scount);
    while (*scount != '\0')
    {
        if (*scount != '%')
        {
            while (*scount != '%'  && *scount != '\0')
            {
                buffer[len] = *scount;
                len++;
                scount++;
                if (len == 1024)
                {
                    a = _puts_buffer(buffer, len);
                    if (a == -1)
                    {
                        return (-1);
                    }
                    r += a;
                    len = 0;
                }
            }
        }
        
        else{
            scount++;
            if (*scount == '\0')
            {
                return (-1);
            }
            /*_puts("-------here 1---------");*/
            s = get_fs(&scount, l);
            temp = get_value_fs(l, s);
            if (temp == NULL)
            {
                return (-1);
            }
            while (*temp != '\0')
            {
                buffer[len] = *temp;
                len++;
                temp++;
                
                if (len == 1024)
                {
                    a = _puts_buffer(buffer, len);
                    if (a == -1)
                    {
                        return (-1);
                    }
                    r += a;
                    len = 0;
                }
            }
            
        }
    }
    
    a = _puts_buffer(buffer, len);
    /*if (temp)
	  free(temp);
    */
    if (a == -1)
    {
        return (-1);
    }
    r += a;
    va_end(l);
    return (r);
}
