NAME = libft.a

CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -rf

SRC = ft_atoi.c\
			ft_putchar.c\
			ft_putstr.c\
			ft_strcmp.c\
			ft_strlen.c\
			ft_strncmp.c

OBJS_NAME = $(SRC:.c=.o)

programa: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -c
	ar -crs $(NAME) $(OBJS_NAME)
clean:
	$(RM) $(OBJS_NAME) 
fclean: clean
	$(RM) $(NAME)
