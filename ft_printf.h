#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "string.h"
# include "unistd.h"
# include "libft/libft.h"
# include <stdarg.h>

typedef struct	s_struct
{
	char	*type;
	int		minus;
	int		zero;
	int		width;
	int		dot;
	int		accuracy;
	int		accuracy_minus;
	int		len;
	int		asterisk;
}				t_struct;

int				ft_printf(const char *str, ...);
int ft_parcer(const char **fmt, t_struct *f, va_list ap);
int ft_processor(va_list ap, t_struct *f);
void ft_get_decimal(va_list ap, t_struct *f);
#endif
