#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_printunum(unsigned int n);
int	ft_printnum(int n);
int	ft_printhex(unsigned int n, char c);
int	ft_printptr(void *p);
int	ft_printf(const char *format, ...);
#endif