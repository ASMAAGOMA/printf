#include "main.h"
/**
 * get_string - create the proper value to be printed. d, i
 * @str: string value.
 * @s: format specifier of the input value to follow.
 * Return: proper string.
*/
char *get_string(char *str, f_s s)
{
    char *temp;
    unsigned int len, tlen, i = 0, j = 0, k;

    if (str == NULL)
    {
        return(NULL);
    }
    len = _strlen(str);
    tlen = len;
    if (s.width > tlen)
    {
        tlen = s.width;
    }
    if (tlen < s.precision )
    {
        tlen = s.precision;
    }
    temp = malloc( sizeof(char) * (tlen + 1));
    if (temp == NULL)
    {
        return (NULL);
    }
    if (s.flag != '-')
    {
        for (i = 0; i < tlen - len ; i++)
        {
            if (s.flag == ' '|| s.w_bi == 1)
            {
                temp[i] = ' ';
            }
        }
        for (k = i; k < tlen; k++)
        {
            temp[k] = str[j];
            j++;
        }
        temp[k] = '\0';
    }
    else
    {
        for (i = 0; i < len ; i++)
        {
            temp[i] = str[i];
        }
        for (k = i; k < tlen; k++)
        {
            if (s.w_bi == 1)
            {
                temp[k] = ' ';
            }
        }
        temp[k] = '\0';
    }
    return (temp);
}
/**
 * get_num - create the proper value to be printed. d, i, b
 * @str: string value.
 * @s: format specifier of the input value to follow.
 * Return: proper string.
*/
char *get_num(char *str, f_s s)
{
    char *temp;
    unsigned int len, tlen, i = 0, j = 0, k;
    if (str == NULL)
    {
        return(NULL);
    }
    len = _strlen(str);
    if (s.specifier == 'd' || s.specifier == 'i')
    {
        if (s.flag == '+')
        {
            if (*str != '-')
            {
                len++;
            }
        }
    }
    tlen = len;
    if (s.width > tlen)
    {
        tlen = s.width;
    }
    if (tlen < s.precision )
    {
        tlen = s.precision;
    }
    temp = malloc( sizeof(char) * (tlen + 1));
    if (temp == NULL)
    {
        return (NULL);
    }
    
    /** only add the if for o x X in here same thing apply*/
    if (s.flag != '-')
    {
        for (i = 0; i < tlen - len ; i++)
        {
            if (s.flag == ' '|| s.w_bi == 1)
            {
                temp[i] = ' ';
            }
            else if (s.flag == '0' || s.p_bi == 1)
            {
                temp[i] = '0';
            }
            else if (s.flag == '#' )
            {
                if (s.specifier == 'o')
                {
                    if (i < (tlen - len - 1))
                    {
                        temp[i] = ' ';
                    }
                    else
                    {
                        temp[i] = '0';
                    }
                }
                else if (s.specifier == 'x' || s.specifier == 'p')
                {
                    if (i < (tlen - len - 2))
                    {
                        temp[i] = ' ';
                    }
                    else if (i == (tlen - len - 2))
                    {
                        temp[i] = '0';
                    }
                    else if (i == (tlen - len - 1))
                    {
                        temp[i] = 'x';
                    }
                }
                else if (s.specifier == 'X')
                {
                    if (i < (tlen - len - 2))
                    {
                        temp[i] = ' ';
                    }
                    else if (i == (tlen - len - 2))
                    {
                        temp[i] = '0';
                    }
                    else if (i == (tlen - len - 1))
                    {
                        temp[i] = 'X';
                    }
                }
                else 
                {
                    return (NULL);
                }

            }
            
        }
        if (s.flag == '+' && (s.specifier == 'd' || s.specifier == 'i'))
        {
            if (str[j] != '-')
            {
                temp[i] = '+';
                i++;
            }
        }
        if (str[j] == '-')
        {
            temp[i] = '-';
            i++;
            j++;
        }
        for (k = i; k < tlen; k++)
        {
            temp[k] = str[j];
            j++;
        }
        temp[k] = '\0'; 

    }
    else
    {
        for (i = 0; i < len ; i++)
        {
            temp[i] = str[i];
        }
        for (k = i; k < tlen; k++)
        {
            if (s.w_bi == 1)
            {
                temp[k] = ' ';
            }
            else if (s.p_bi == 1)
            {
                temp[k] = '0';
            }
        }
        temp[k] = '\0';
    }
    return (temp);
}
/**
 * get_value_fs - gets the string to add to buffer.
 * @l: va_list of input.
 * @s: the format specifier given.
 * Retern: the value to be printed (added to buffer).
*/
char *get_value_fs(va_list l, f_s s)
{
    char *temp1;
    static char tmp_list[2] = {'\0', '\0'};
    
    switch (s.specifier)
	{
        case 'd':case 'i':
            if (s.length == 1)
            {
                temp1 = convert_ld_s(l);
                return (get_num(temp1, s));
            }
            if (s.length == -1)
            {
                temp1 = convert_hd_s(l);
                return (get_num(temp1, s));
            }
            if (s.length == 0)
            {
                temp1 = convert_d_s(l);
                return (get_num(temp1, s));
            }break;
        case 'u':
            if (s.length == 1)
            {
                temp1 = convert_lu_s(l);
                return (get_num(temp1, s));
            }
            if (s.length == -1)
            {
                temp1 = convert_hu_s(l);
                return (get_num(temp1, s));
            }
            if (s.length == 0)
            {
                temp1 = convert_u_s(l);
                return (get_num(temp1, s));
            }break;
        case 'b':
            if (s.length == 1)
            {
                temp1 = convert_lb_s(l);
                return (get_num(temp1, s));
            }
            if (s.length == -1)
            {
                temp1 = convert_hb_s(l);
                return (get_num(temp1, s));
            }
            if (s.length == 0)
            {
                temp1 = convert_b_s(l);
                return (get_num(temp1, s));
            }break;
        case 'o':
            if (s.length == 1)
            {
                temp1 = convert_lo_s(l);
                return (get_num(temp1, s));
            }
            if (s.length == -1)
            {
                temp1 = convert_ho_s(l);
                return (get_num(temp1, s));
            }
            if (s.length == 0)
            {
                temp1 = convert_o_s(l);
                return (get_num(temp1, s));
            }break;
        case 'x':
            if (s.length == 1)
            {
                temp1 = convert_lx_s(l);
                return (get_num(temp1, s));
            }
            if (s.length == -1)
            {
                temp1 = convert_hx_s(l);
                return (get_num(temp1, s));
            }
            if (s.length == 0)
            {
                temp1 = convert_x_s(l);
                return (get_num(temp1, s));
            }break;
        case 'X':
            if (s.length == 1)
            {
                temp1 = convert_lX_s(l);
                return (get_num(temp1, s));
            }
            if (s.length == -1)
            {
                temp1 = convert_hX_s(l);
                return (get_num(temp1, s));
            }
            if (s.length == 0)
            {
                temp1 = convert_X_s(l);
                return (get_num(temp1, s));
            }break;
        case 'r':
            temp1 = reverse(va_arg(l, char*));
            if (temp1 == NULL)
            {
                return (NULL);
            }
            return (get_string(temp1, s));
            break;
        case 'R':
            temp1 = rot13(va_arg(l, char*));
            if (temp1 == NULL)
            {
                return (NULL);
            }
            return (get_string(temp1, s));
            break;
        case 'c':
            tmp_list[0] = (char) va_arg(l, int);
            return (get_string(tmp_list, s));
            break;
	    case 's':
            temp1 = va_arg(l, char*);
		    return (get_string(temp1, s));
            break;
        case '%':
            tmp_list[0] = '%';
		    return (tmp_list);
            break;
        case 'p':
            temp1 = convert_x_s(l);
            return (get_num(temp1, s));
            break;

	}
	return (NULL);
	
}
/**
 * get_fs - gets format specifier.
 * @scount: format string.
 * @l: list of args.
 * Return: format specifier struct.
 */
f_s get_fs(char **scount, va_list l)
{
    f_s s;
    s.width = 0;
    s.length = 0;
    s.precision = 0;
    s.has = 0;
	while (**scount == '-' || **scount == '+' 
    || **scount == ' ' || **scount == '#' 
    || **scount == '0')
	{
        s.flag = **scount;
        (*scount)++;
    }
    if (**scount == '*')
    {
        s.width = va_arg(l, int);
        s.w_bi = 1;
        s.has = 1;
        (*scount)++;
    }
    else {
        while (**scount >= '0' && **scount <= '9')
        {
            if (!s.w_bi)
            {
                s.width = 0;
            }
            s.width *= 10;
            s.width += **scount - '0';
            s.w_bi = 1;
            (*scount)++;
        }
    }
    if (**scount == '.')
    {
        (*scount)++;
        if (**scount == '*')
        {
            s.precision = va_arg(l, int);
            s.p_bi = 1;
            s.has = 1;
            (*scount)++;
        }
        else 
        {
            while (**scount >= '0' && **scount <= '9')
            {
                s.precision *= 10;
                s.precision += **scount - '0';
                s.p_bi = 1;
                (*scount)++;
            }
        }
    }
    s.length = 0;
    if (**scount == 'h')
    {
        s.length = -1;
        (*scount)++;
    }
    if (**scount == 'l')
    {
        s.length = 1;
        (*scount)++;
    }
    if (**scount == 'd' || **scount == 'i' 
    || **scount == 'u' || **scount == 'o' 
    || **scount == 'x' || **scount == 'X' 
    || **scount == 'c' || **scount == 's' 
    || **scount == 'p' || **scount == '%' 
    || **scount == 'b' || **scount == 'r' || **scount == 'R')
    {
        s.specifier = **scount;
        (*scount)++;
    }
    return (s);
}
