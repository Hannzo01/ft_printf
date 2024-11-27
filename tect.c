


char arr[17] = "0123456789abcdef";
char string[17];
va_list arg;
va_start(arg,count);
void *p = va_arg(arg,void *);
unsigned long x = (unsigned long)p;

while (x > 0)
{
	string[--] = arr[x % 16];
	x /= 16;
}
