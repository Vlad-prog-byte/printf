#include"../includes/ft_printf.h"

void ft_put_address(unsigned int number, int *sum)
{
    if (number == 0)
        *sum += write(1, "(nil)", 5);
    else
    {
        *sum += write(1, "0x", 2);
        ft_put_hexadecimal(number, sum, 'x');
    }
}