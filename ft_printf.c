/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:44:51 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/29 13:44:51 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	else
	{
		counter += ft_putchar('%');
		counter += ft_putchar(c);
	}
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	p;
	int		count;

	if (!format)
		return (-1);
	va_start(p, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(format + 1) == '\0')
				return (-1);
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
