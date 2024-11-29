#include "ft_printf.h"

int	ft_printhex(unsigned int n, char c)
{
	int		counter;
	char	*array;

	counter = 0;
	if (c == 'x')
		array = "0123456789abcdef";
	else
		array = "0123456789ABCDEF";
	if (n >= 16)
	{
		counter += ft_printhex(n / 16, c);
		counter += ft_printhex(n % 16, c);
	}
	else
		counter += ft_putchar(array[n]);
	return (counter);
}
