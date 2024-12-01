/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:45:48 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/29 13:45:48 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	if (!str)
		return(write(1, "(null)", 6));
	while (*str)
	{
		counter += ft_putchar(*str);
		if (counter == -1)
			return (-1);
		str++;
	}
	return (counter);
}
