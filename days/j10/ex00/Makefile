# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/19 16:48:47 by pde-rent          #+#    #+#              #
#    Updated: 2017/09/19 16:48:53 by pde-rent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_*.c
FLAGS = -Wall -Werror -Wextra
INCLUDES = -I /includes
CMP = ft_*.o
all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(INCLUDES) -c $(SRC)
	ar rc $(NAME) $(CMP)
	ranlib $(NAME)

clean:
	/bin/rm -f $(CMP)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
