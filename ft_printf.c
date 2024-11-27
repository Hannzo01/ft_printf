#include "ft_printf.h"

//my printfi has to return the amount of char written
int printfi(const char *format, ...)
{
	va_list p; //pointer points towards the arguments which is the string format
	// I have to skip the string format and go to the real first argument we need va_Start
	int	count;

	va_start(p, format); //now ap is pointing to the real first argument 
	count = 0;

	//TO CHECK FOR the arguments , loop inside the string and when I find a percent sign 'there will be an argument'
	// like a flag 

	while (*format != '\0')
	{
		if (*format == '%')
			count += char_format(*(format + 1), p);
		else
			count += ft_putchar(*(format + 1));
			format++;
	}
	va_end(p);
}