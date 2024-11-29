/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:45:11 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/29 13:45:11 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *p)
{
	int	counter;

	counter = 0;
	if (p == NULL)
		return (ft_putstr("(nil)"));
	else
	{
		counter += ft_putsr("0x");
		counter += ft_printhex((unsigned long)p, 'x');
	}
	return (counter);
}
