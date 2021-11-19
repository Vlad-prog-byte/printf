#include"../includes/ft_printf.h"
static void	Recur(long int n, int *sum)
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

void	ft_putnbr_fd(int n, int *sum)
{
	int			flag;
	long int	new_n;

	flag = 1;
	if (n == 0)
	{
		*sum += write(1, "0", 1);
		return ;
	}
	if (n <= 0)
	{
		*sum += write(1, "-", 1);
		flag = -1;
	}
	new_n = n;
	new_n *= flag;
	Recur(new_n, sum);
}