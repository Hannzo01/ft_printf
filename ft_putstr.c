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
	int	w_counter;

	counter = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		w_counter = ft_putchar(*str);
		if (w_counter == -1)
			return (-1);
		counter += w_counter;
		str++;
	}
	return (counter);
}
