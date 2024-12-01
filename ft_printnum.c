/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:45:06 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/29 13:45:06 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnum(int n)
{
	int	counter;

	counter = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		counter = ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		counter += ft_printnum (n / 10);
		counter += ft_printnum (n % 10);
	}
	else
		counter += ft_putchar(n + 48);
	return (counter);
}
