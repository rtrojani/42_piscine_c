CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_putchar.c \
	ft_putstr.c \
	ft_atoi.c \
	ft_putnbr.c \
	ft_add.c \
	ft_sub.c \
	ft_mul.c \
	ft_div.c \
	ft_mod.c \
	ft_usage.c \
	ft_advanced_do_op.c \
	main.c
SRC_PATH = srcs/
INCLUDE = -I includes/
OBJ = $(SRC:.c=.o)
NAME = ft_advanced_do-op
.PHONY = all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ) : $(addprefix $(SRC_PATH), $(SRC))
	$(CC) $(CFLAGS) $(addprefix $(SRC_PATH), $(SRC)) $(INCLUDE) -c

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : $(NAME) clean
