/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:45:00 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/29 13:45:00 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long n, char c)
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
