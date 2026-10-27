# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jordan <jordan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/08 09:48:24 by jordan            #+#    #+#              #
#    Updated: 2026/10/19 10:41:02 by jordan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_conversion_cs.c ft_conversion_num.c ft_conversion_ptr.c ft_conversion.c \
		ft_printf.c ft_putnbr_hexadecimal.c ft_putnbr_unsigned.c ft_putnbr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o : %.c
	cc -Wall -Wextra -Werror -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all