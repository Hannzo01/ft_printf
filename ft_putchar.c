#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	result;

	result = 0;
	result = write(1, &c, 1);
	return (result);
}
