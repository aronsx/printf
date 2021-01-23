#include "../ft_printf.h"
#include <stdio.h>

void ft_get_decimal(va_list ap, t_struct *f)
{
    int num;

    f->len = f->len;
    num = va_arg(ap, int);
    printf("\n%d %d\n", num, f->len);
    ft_putnbr_fd(num, 1);
}
