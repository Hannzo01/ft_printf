#include "ft_printf.h"

int ft_printnum(int n)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (n == 0)
		return (ft_putchar('0'));
	if (n < 0)
	{
		counter += ft_putchar('-');
		if (n == -2147483648) // Handle edge case for minimum int
        {
            counter += ft_putchar('2');
            n = 147483648; // Remaining positive part
        }
        else
            n = -n;
	}
	while (n != 0)
	{
		i = n % 10;
		counter += ft_putchar(i + 48);
		n = n / 10;
	}
	return (counter);
}
