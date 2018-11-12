# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lubenard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 09:14:04 by lubenard          #+#    #+#              #
#    Updated: 2018/11/06 14:20:17 by lubenard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CFLAG = -Wall -Werror -Wextra -Iincludes/

SRCS =  srcs/main.c\
	srcs/ft_utils.c

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAG) $(OBJ) -o $(NAME)

%.o: $(SRCS)%.c
	gcc $(CFLAG) -o $@ -c $^

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all
