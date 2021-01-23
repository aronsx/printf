#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

static int write_text(const char **fmt, t_struct *f)
{
	while(**fmt && **fmt != '%')
	{
		write(1, *fmt, 1);
		++*fmt;
		f->len++;
	}
    ++*fmt;
    /*if (**fmt == '%')*/

	if (!**fmt)
		return (0);
	return (1);
}

static void			init_struct(t_struct *f)
{
	f->type = NULL;
	f->minus = 0;
	f->zero = 0;
	f->width = 0;
	f->accuracy = 0; // TODO rename accuracy
	f->accuracy_minus = 0; // TODO rename accuracy
	f->dot = 0; // rename dot
	f->asterisk = 0; // rename asterisk
    /* pmin - минус после точки (отрицательная точность) */
}

int ft_printf(const char *fmt, ...)
{
	 va_list ap;
	 t_struct f;

	 va_start(ap, fmt);

	 f.len = 0;
	 init_struct(&f);
     while (write_text(&fmt, &f)) // TODO add init in while
     {
         ft_parcer(&fmt, &f, ap); /*parcer*/
        /*processor*/
         //printf("%s %d %d %d %d %d %d\n", f.type, f.minus, f.zero, f.width, f.accuracy, f.dot, f.asterisk);
         init_struct(&f);
     }
	 va_end(ap);

     //printf("\n%d\n", f.len);
	 return (1); // return count
}

int main()
{
    ft_printf("test_1%-012.44dasdf_\n_)%s<_fdsdf%d<*", 12); // TODO сравнить с оригиналом считается ли длинна \n
    /*ft_printf("test 2%-0 12.0dasdF\n", 12);*/
    return 0;
}
