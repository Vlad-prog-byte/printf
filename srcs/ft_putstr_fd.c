#include"../includes/ft_printf.h"

void	ft_putstr_fd(char *s, int *sum)
{
	if (s == 0)
		*sum += write(1, "(null)", 6);
	while (*s)
		*sum += write(1, s++, 1);
}