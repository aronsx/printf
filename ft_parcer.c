#include "ft_printf.h"
#include <stdio.h> // TODO delete after test
#include "libft/libft.h"

int get_type(const char **fmt, t_struct *f)
{
    //printf(">>>type:_%s %d<<<", *fmt, f->len);
    char *types;

    types = "cspdiuxX%";
    f->type = ft_strchr(types, **fmt);
    if (f->type)
    {
        ++*fmt;
        //printf("%s", *fmt);
        return (1);
    }
    return(0);
}

static void get_accuracy(const char **fmt, t_struct *f, va_list ap)
{
    if (**fmt == '.')
    {
        f->dot = 1;
        ++*fmt;
        if (**fmt == '*')
        {
            f->accuracy = va_arg(ap, int);
            ++*fmt;
            if (f->accuracy < 0)
            {
                f->accuracy = 0;
                f->accuracy_minus = 1;
            }
        }
        if (ft_isdigit(**fmt))
            f->accuracy = ft_atoi(*fmt);
        while(ft_isdigit(**fmt))
            ++*fmt;
    }
}

static void get_width(const char **fmt, t_struct *f, va_list ap)
{
/*
 * селать проверку, если ширина < 0
 * minus = 1 
 * width *(-1)
 * zero = 0
 */
    if (**fmt == '*')
    {
        f->width = va_arg(ap, int);
        ++*fmt;
        if (f->width < 0)
        {
            f->width *= -1;
            f->minus = 1;
            f->zero = 0;
        }
    }
    if (ft_isdigit(**fmt))
        f->width = ft_atoi(*fmt);
    while(ft_isdigit(**fmt))
        ++*fmt;
}

static void get_flags(const char **fmt, t_struct *f)
{
    while(**fmt == '-' || **fmt == '0')
    {
        if (**fmt == '-')
            f->minus = 1;
        if (**fmt == '0')
            f->zero = 1;
        ++*fmt; // TODO provetit' vzaimoiskluchenie
    }
    if (f->minus)
        f->zero = 0;
}

 int ft_parcer(const char **fmt, t_struct *f, va_list ap)
{
    get_flags(fmt, f); /*flags*/
    get_width(fmt, f, ap); /*width*/
    get_accuracy(fmt, f, ap); /*accuracycision*/
    if (!get_type(fmt, f)) /*type return va_end, if not search format*/
    {
        va_end(ap);
        return (0);
    }
    //printf("[%s]", f->type);
    return (1);
}
