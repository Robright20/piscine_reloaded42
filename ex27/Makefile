# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fokrober <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 03:03:52 by fokrober          #+#    #+#              #
#    Updated: 2019/04/02 03:28:43 by fokrober         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = src/ft_putchar.c src/ft_puterr.c

INC = inc

FLAG = -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAG) ft_display_file.c $(SRC) -I $(INC) -o $(NAME)

all: $(NAME)

clean:
	/bin/rm -f *.o *.gch

fclean: clean
	/bin/rm -f $(NAME)
