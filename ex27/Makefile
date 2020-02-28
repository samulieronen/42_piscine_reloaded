#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seronen <seronen@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 12:34:32 by seronen           #+#    #+#              #
#    Updated: 2019/10/22 12:36:17 by seronen          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

SRC = ft_display_file.c ft_putchar.c ft_putstr.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all