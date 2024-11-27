#include "ft_printf.h"

int	format_char(char c, va_list p)
{
	int	counter;

	counter = 0;
	if (c == 's')
		counter += ft_putstr(va_arg(p, char *));
	else if (c == 'c')
		counter += ft_putchar(va_arg(p, int));
	else if (c == 'i' || c == 'd')
		counter += ft_putnum(va_arg(p, int));
	else if (c == 'u')
		counter += ft_putunum(va_arg(p, unsigned int));
	else if (c == 'x' || c == 'X')
		counter += ft_puthexa(va_arg(p, unsigned int));
	else if (c == '%')
		counter += ft_putchar('%');
	else if (c == 'p')
		counter += ft_putptr(va_arg(p, void *));

	return (counter);
}
