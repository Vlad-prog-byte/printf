#include"../includes/ft_printf.h"
static void	Recur(unsigned long int n, int *sum)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		*sum += write(1, &c, 1);
	}
	else
	{
		Recur(n / 10, sum);
		Recur(n % 10, sum);
	}
}

void	ft_put_unsigned_int(unsigned int n, int *sum)
{
	unsigned long int	new_n;

	if (n == 0)
	{
		*sum += write(1, "0", 1);
		return ;
	}
	new_n = n;
	Recur(new_n, sum);
}