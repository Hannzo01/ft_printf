NAME = libftprintf.a
SRC	= ft_printf.c ft_printhex.c ft_printnum.c ft_printunum.c ft_putchar.c ft_putstr.c ft_printptr.c
OBJ = $(SRC:.c=.o)
CFLAFS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
