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
