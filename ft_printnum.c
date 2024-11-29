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
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (n == 0)
		return (ft_putchar('0'));
	if (n < 0)
	{
		counter += ft_putchar('-');
		if (n == -2147483648)
		{
			counter += ft_putchar('2');
			n = 147483648;
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
