# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fokrober <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/31 22:44:46 by fokrober          #+#    #+#              #
#    Updated: 2019/04/01 02:47:57 by fokrober         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADER = includes/

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

$(NAME): object
	ar rc $(NAME) $(OBJ)

object:
	gcc -c $(SRC) -I $(HEADER)

all: $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f ./includes/libft.h.gch $(OBJ) $(NAME)

re: fclean all

