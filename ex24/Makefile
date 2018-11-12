# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lubenard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 09:14:04 by lubenard          #+#    #+#              #
#    Updated: 2018/11/06 16:16:17 by lubenard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c\
	  srcs/ft_putstr.c\
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c\
	  srcs/ft_swap.c

OBJ = $(subst srcs/, ,$(SRC:.c=.o))

HEAD = includes

all:  $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I$(HEAD)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
