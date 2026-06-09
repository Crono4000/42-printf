
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

CFILES = print_hexadecimal.c printf.c putstuff.c
OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean re fclean all
