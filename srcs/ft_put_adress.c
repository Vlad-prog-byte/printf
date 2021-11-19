#include"../includes/ft_printf.h"


char translate(unsigned int number)
{
    if (number < 10)
        return ('0' + number);
    else if (number == 10)
        return ('a');
    else if (number == 11)
        return ('b');
    else if (number == 12)
        return ('c');
    else if (number == 13)
        return ('d');
    else if (number == 14)
        return ('e');
    else
        return ('f');
}
void write_number(unsigned long number, int *sum)
{
    if (number == 0)
        return ;
    else
    {
        write_number(number / 16, sum);
        char symbol = translate(number % 16);
        *sum += write(1, &symbol, 1);
    }
}

void ft_put_adress(unsigned long number, int *sum)
{
    *sum += write(1, "0x", 2);
    if (number == 0)
        *sum += write(1, "0", 1);
    else
    write_number(number, sum);
}

