#include "ft_printf.h"

int ft_processor(va_list ap, t_struct *f)
{
    /*if (**fmt == 'c')*/
    /*if (**fmt == 's')*/
    /*if (**fmt == 'p')*/
    if (*f->type == 'd' || *f->type == 'i')
        ft_get_decimal(ap, f);
    /*if (**fmt == 'u')*/
    /*if (**fmt == 'x' || **fmt == 'X')*/
    /*if (**fmt == '%')*/
    return (1);
}

