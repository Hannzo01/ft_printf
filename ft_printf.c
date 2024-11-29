#include "ft_printf.h"

static int	format_check(char c, va_list p)
{
	int	counter;

	counter = 0;
	if (c == 's')
		counter += ft_putstr(va_arg(p, char *));
	else if (c == 'c')
		counter += ft_putchar(va_arg(p, int));
	else if (c == 'i' || c == 'd')
		counter += ft_printnum(va_arg(p, int));
	else if (c == 'u')
		counter += ft_printunum(va_arg(p, unsigned int));
	else if (c == 'x' || c == 'X')
		counter += ft_printhex(va_arg(p, unsigned int), c);
	else if (c == '%')
		counter += ft_putchar('%');
	else if (c == 'p')
		counter += ft_printptr(va_arg(p, void *));
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	p;
	int		count;

	va_start(p, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			count += format_check(*(format + 1), p);
			format += 2;
		}
		else
		{
			count += ft_putchar(*format);
			format++;
		}
	}
	va_end(p);
	return (count);
}
