#include "ft_printf.h"
// v  number of char witten is the stdout
int	ft_putstr(char *str)
{
	int	counter;
	int	w_counter;

	counter = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		w_counter = write(1, str++, 1);
		if (w_counter == -1)
			return (-1);
		counter += w_counter;
	}
	return (counter);
}