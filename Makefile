# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jakgonza <jakgonza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 16:14:09 by jakgonza          #+#    #+#              #
#    Updated: 2022/10/09 17:18:58 by jakgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_puthexa.c ft_putnbr_u.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

clean:
	rm -f $(OBJS)
	@echo "Object files removed"

fclean: clean
	rm -f $(NAME)
	@echo "Library removed"

re: fclean all

.PHONY: all clean fclean re
