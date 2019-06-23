CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_putchar.c \
	ft_putstr.c \
	ft_strcmp.c \
	ft_strlen.c \
	ft_swap.c
SRC_PATH = srcs/
INCLUDE = -l /includes
OBJ = $(SRC:.c=.o)
NAME = libft.a
.PHONY = all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ) : $(addprefix $(SRC_PATH), $(SRC))
	$(CC) $(CFLAGS) $(addprefix $(SRC_PATH), $(SRC)) $(INCLUDE) -c

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : $(NAME) clean
