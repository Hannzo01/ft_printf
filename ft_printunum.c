#include "ft_printf.h"

int	ft_printunum(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n >= 10)
	{
		counter += ft_printunum (n / 10);
		counter += ft_printunum (n % 10);
	}
	else
		counter += ft_putchar(n + 48);
	return (counter);
}
