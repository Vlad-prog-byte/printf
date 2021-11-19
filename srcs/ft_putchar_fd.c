#include"../includes/ft_printf.h"

void	ft_putchar_fd(char c, int *sum)
{
	*sum += write(1, &c, 1);
}