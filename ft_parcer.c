/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aronsx </var/spool/mail/aronsx>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 23:57:19 by aronsx            #+#    #+#             */
/*   Updated: 2021/01/22 06:23:35 by aronsx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        }
        if (ft_isdigit(**fmt))
            f->accuracy = ft_atoi(*fmt);
        while(ft_isdigit(**fmt))
            ++*fmt;
    }
}

static void get_width(const char **fmt, t_struct *f, va_list ap)
{
    if (**fmt == '*')
    {
        f->width = va_arg(ap, int);
        ++*fmt;
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
            f->minus = 1;
        if (**fmt == '0')
            f->zero = 1;
        ++*fmt; // TODO provetit' vzaimoiskluchenie
    }
}

 int ft_parcer(const char **fmt, t_struct *f, va_list ap)
{
    get_flags(fmt, f); /*flags*/
    get_width(fmt, f, ap); /*width*/
    get_accuracy(fmt, f, ap); /*accuracycision*/
    get_type(fmt, f); /*type return va_end, if not search format*/
    return (1);
}
