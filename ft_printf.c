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
	if (!**fmt)
		return (0);
	return (1);
}

static void			init_zero_struct(t_struct *f)
{
	f->type = 0;
	f->minus = 0;
	f->zero = 0;
	f->width = 0;
	f->pre = 0;
	f->point = 0;
	f->star = 0;
}

int ft_printf(const char *fmt, ...)
{
	 va_list ap;
	 t_struct f;

	 va_start(ap, fmt);
	 init_zero_struct(&f);
	 f.len = 0;
	 write_text(&fmt, &f);

	 va_end(ap);

	 return (1); // return count
}

int main()
{
	ft_printf("test 1%f", 12);
	return 0;
}
