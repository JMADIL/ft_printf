NAME = libftprintf.a
SOURCES =    ft_putptr.c\
			ft_putunsigned.c\
			ft_printf.c\
			ft_putchar.c\
			ft_puthex.c\
			ft_putnbr.c\
			ft_putstr.c

OBJECTS = $(SOURCES:%.c=%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean re